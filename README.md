What is Kalycoin?
-------------

Kalycoin is a decentralized blockchain project built on Bitcoin's UTXO model, with support for Ethereum Virtual Machine based smart contracts, and secured by a proof of stake consensus model. It achieves this through the revolutionary Account Abstraction Layer which allows the EVM to communicate with Kalycoin's Bitcoin-like UTXO blockchain. For more general information about Kalycoin as well as links to join our community, go to https://kalycoin.io

Welcome to the Kalycoin Ignition Main Network. This is the main network where the tokens hold value and should be guarded very carefully. If you are testing the network, or developing unstable software on Kalycoin, we highly recommend using either testnet or regtest mode. 

The major features of the Kalycoin network include:

1. Compatibility with the Ethereum Virtual Machine, which allows for compatibility with most existing Solidity based smart contracts. No special solidity compiler is required to deploy your smart contract to Kalycoin. 
2. A Proof of Stake consensus system which is optimized for Kalycoin's contract model. Any user can stake and help to secure the network. There is no voting, master nodes, or minimum amount required. There have been transactions as small as 2 Kalycoin that have created blocks in the past. Staking from smart contracts is under development.
3. The Decentralized Governance Protocol is completely implemented and functional, which allows certain network parameters to be modified without a fork or other network disruption. This currently controls parameters like block size, gas prices, etc. 
4. Uses the UTXO transaction model and is compatible with Bitcoin, allowing for existing tooling and workflows to be used with Kalycoin. This allows for the infamous SPV protocol to be used which is ideal for light wallets on mobile phones and IoT devices.

Note: Kalycoin Core is considered beta software. We make no warranties or guarantees of its security or stability.

Kalycoin Documentation and Usage Resources
---------------

These are some resources that might be helpful in understanding Kalycoin.

Basic usage resources:

* [User guide](https://kalycoin.gitbook.io/kalycoin-documentation/)
* [Kalycoin-Qt Wallet Tutorial](https://kalycoin.gitbook.io/kalycoin-documentation/desktop-wallet-basic-usage)
* [Kalycoin staking tutorial]https://kalycoin.gitbook.io/kalycoin-documentation/desktop-wallet-basic-usage#staking)
* [Kalycoin tutorial on Raspberry Pi](https://kalycoin.gitbook.io/kalycoin-documentation/kalycoin-on-raspberry-pi)
* [Encrypting and unlocking wallet](https://kalycoin.gitbook.io/kalycoin-documentation/kalycoin-on-raspberry-pi#encrypting-wallet)
* [Block explorer](https://explorer.kalycoin.io), [Older explorer](https://explorer.kalycoin.io)


Development resources:

* [Kalycoin Book - A Developer's Guide To KLC](https://kalycoin.gitbook.io/kalycoin-documentation/kalycoin-rpc-api)
* [Kalycoin contract usage](https://kalycoin.gitbook.io/kalycoin-documentation/krc20-token-introduction)
* [Deploying a custom token to Kalycoin](https://kalycoin.gitbook.io/kalycoin-documentation/krc20-token-introduction#creating-krc20-tokens)
* [KalycoinJS document](https://kalycoinproject.github.io/kalycoinjs-doc/)


General Info about Kalycoin:

* [Kalycoin Project](https://kalycoin.io/en/)
* [Youtube](https://kalycoin.io/en/)
* [Whitepaper](https://kalycoin.io/wp-content/uploads/2022/03/White-paper-KLC-EN.pdf/)


Developer's Tools
-----------------

* Smart contract deployment tool
  * https://github.com/kalycoinproject/solar
* DApp JavaScript Library
  * https://github.com/kalycoinproject/kalycoinjs
* A toolkit for building kalycoin light wallets
  * https://github.com/kalycoinproject/kalycoinjs-wallet
* CORS kalycoind RPC proxy for DApp
  * https://github.com/kalycoinproject/kalycoinportal
* Docker images for running kalycoin services
  * https://github.com/kalycoinproject/kalycoin-docker
* explorer.kalycoin.io API that powers the block explorer and the KLC Web wallet
  * https://github.com/kalycoinproject/kalycoininfo-api#kalycoininfo-api-documentation


What is Kalycoin Core?
------------------

Kalycoin Core is our primary mainnet wallet. It implements a full node and is capable of storing, validating, and distributing all history of the Kalycoin network. Kalycoin Core is considered the reference implementation for the Kalycoin network. 

Kalycoin Core currently implements the following:

* Sending/Receiving KLC coins
* Sending/Receiving KRC20 tokens on the Kalycoin network
* Staking and creating blocks for the Kalycoin network
* Creating and interacting with smart contracts
* Running a full node for distributing the blockchain to other users
* "Prune" mode, which minimizes disk usage
* Regtest mode, which enables developers to very quickly build their own private Kalycoin network for Dapp testing
* Testnet mode, using the public Kalycoin Testnet, with faucet available
* Compatibility with the Bitcoin Core set of RPC commands and APIs
* Full SegWit capability with p2sh-segwit (legacy) and bech32 (native) addresses

Alternative Wallets
-------------------

Kalycoin Core uses a full node model, and thus requires downloading the entire blockchain. If you do not need the entire blockchain, and do not intend on developing smart contracts, it may be more ideal to use an alternative wallet such as one of our light wallets that can be synchronized in a matter of seconds. 

### Kalycoin Web Wallet

A browser wallet that supports the Ledger hardware wallet, offline cold wallet, and restoration from mobile wallets.

Web site https://kalycoin.io

User documentation https://kalycoin.gitbook.io/kalycoin-documentation/

### iOS and Android Wallets

On Development. 

Android Download: On Development. 

iOS Download: On Development. 


### Community Resources

Make sure to check out these resources as well for more information and to keep up to date with all the latest news about Kalycoin. At least 1 developer is always around, so if you're developing on Kalycoin and need help, we'd love to welcome you to our community.

*	@Kalycoin on Twitter https://twitter.com/kalycoin
*	Kalycoin Telegram Group https://t.me/kalycoinofficial, other languages available
* Kalycoin Discord https://discordapp.com/invite/wRfmkQ9
*	/r/Kalycoin on Reddit https://www.reddit.com/r/Kalycoin/
*	Kalycoin.org https://kalycoin.io
*	Kalycoin on Facebook https://www.facebook.com/KalycoinOfficial/
*	Kalycoin Forum https://forum.kalycoin.io

### Kalycoin Smart Contract Limitations

*	EVM smart contracts cannot receive coins from or send coins to any address type other than pay-to-pubkeyhash (starts with Q) addresses. This is due to a limitation in the EVM
*	Contracts are not allowed to create contracts with an initial endowment of coins. The contract must first be created, and then be sent coins in a separate transaction. Humans are also not allowed to create contracts with an initial endowment of coins.
*	Although all of the infrastructure is present, Kalycoin Core does not currently parse Solidity event data. You must parse this yourself using either searchlogs or -record-log-opcodes features.
*	It is not possible to send a contract coins without also executing the contract. This is also the case of Ethereum. This was promised in earlier discussions and technically does work, but due to lack of time for testing this feature was disabled. We hope to reenable this feature with release of the x86 virtual machine in 2020.
*	In Kalycoin there can be multiple addresses used to create a proof-of-stake block. However, the EVM can only see the first output using the coinbase operation in Solidity (this address is also the one registered for the continuous staker rewards after 500 blocks).

----------

# Building Kalycoin Core

### Validate and Reproduce Binaries

Kalycoin uses a tool called Gitian to make reproducible builds that can be verified by anyone. Instructions on setting up a Gitian VM and building Kalycoin are provided in [Gitan Building](https://github.com/kalycoinproject/kalycoin/blob/master/doc/gitian-building.md)

### Build on Ubuntu

This is a quick start script for compiling Kalycoin on Ubuntu


    sudo apt-get install build-essential libtool autotools-dev automake pkg-config libssl-dev libevent-dev bsdmainutils git cmake libboost-all-dev libgmp3-dev
    sudo apt-get install software-properties-common
    sudo add-apt-repository ppa:bitcoin/bitcoin
    sudo apt-get update
    sudo apt-get install libdb4.8-dev libdb4.8++-dev

    # If you want to build the Qt GUI:
    sudo apt-get install libqt5gui5 libqt5core5a libqt5dbus5 qttools5-dev qttools5-dev-tools libprotobuf-dev protobuf-compiler qrencode

    git clone https://github.com/kalycoinproject/kalycoin --recursive
    cd kalycoin

    # Note autogen will prompt to install some more dependencies if needed
    ./autogen.sh
    ./configure 
    make -j2
    
### Build on CentOS

Here is a brief description for compiling Kalycoin on CentOS, for more details please refer to [the specific document](https://github.com/kalycoinproject/kalycoin/blob/master/doc/build-unix.md)

    # Compiling boost manually
    sudo yum install python-devel bzip2-devel
    git clone https://github.com/boostorg/boost.git
    cd boost
    git checkout boost-1.66.0
    git submodule update --init --recursive
    ./bootstrap.sh --prefix=/usr --libdir=/usr/lib64
    ./b2 headers
    sudo ./b2 -j4 install
    
    # Installing Dependencies for Kalycoin
    sudo yum install epel-release
    sudo yum install libtool libdb4-cxx-devel openssl-devel libevent-devel gmp-devel
    
    # If you want to build the Qt GUI:
    sudo yum install qt5-qttools-devel protobuf-devel qrencode-devel
    
    # Building Kalycoin
    git clone --recursive https://github.com/kalycoinproject/kalycoin.git
    cd kalycoin
    ./autogen.sh
    ./configure
    make -j4

### Build on Mac OS

The commands in this guide should be executed in a Terminal application.
The built-in one is located in `/Applications/Utilities/Terminal.app`.

#### Preparation

Install the Mac OS command line tools:

`xcode-select --install`

When the popup appears, click `Install`.

Then install [Homebrew](https://brew.sh).

#### Dependencies

    brew install cmake automake berkeley-db4 libtool boost miniupnpc openssl pkg-config protobuf qt5 libevent imagemagick librsvg qrencode gmp

NOTE: Building with Qt4 is still supported, however, could result in a broken UI. Building with Qt5 is recommended.

#### Build Kalycoin Core

1. Clone the kalycoin source code and cd into `kalycoin`

        git clone --recursive https://github.com/kalycoinproject/kalycoin.git
        cd kalycoin

2.  Build kalycoin-core:

    Configure and build the headless kalycoin binaries as well as the GUI (if Qt is found).

    You can disable the GUI build by passing `--without-gui` to configure.

        ./autogen.sh
        ./configure
        make

3.  It is recommended to build and run the unit tests:

        make check

### Run

Then you can either run the command-line daemon using `src/kalycoind` and `src/kalycoin-cli`, or you can run the Qt GUI using `src/qt/kalycoin-qt`

License
-------

Kalycoin is GPLv3 licensed.

Development Process
-------------------

The `master` branch is regularly built and tested, but is not guaranteed to be
completely stable. [Tags](https://github.com/kalycoinproject/kalycoin/tags) are created
regularly to indicate new official, stable release versions of Kalycoin.

The contribution workflow is described in [CONTRIBUTING.md](https://github.com/kalycoinproject/kalycoin/blob/master/CONTRIBUTING.md)
and useful hints for developers can be found in [doc/developer-notes.md](doc/developer-notes.md).

Testing
-------

Testing and code review is the bottleneck for development; we get more pull
requests than we can review and test on short notice. Please be patient and help out by testing
other people's pull requests, and remember this is a security-critical project where any mistake might cost people
lots of money.

### Automated Testing

Developers are strongly encouraged to write [unit tests](src/test/README.md) for new code, and to
submit new unit tests for old code. Unit tests can be compiled and run
(assuming they weren't disabled in configure) with: `make check`. Further details on running
and extending unit tests can be found in [/src/test/README.md](/src/test/README.md).

There are also [regression and integration tests](/test), written
in Python, that are run automatically on the build server.
These tests can be run (if the [test dependencies](/test) are installed) with: `test/functional/test_runner.py`

The Travis CI system makes sure that every pull request is built for Windows, Linux, and macOS, and that unit/sanity tests are run automatically.

### Manual Quality Assurance (QA) Testing

Changes should be tested by somebody other than the developer who wrote the
code. This is especially important for large or high-risk changes. It is useful
to add a test plan to the pull request description if testing the changes is
not straightforward.

