// Copyright (c) 2016-2019 The CryptoCoderz Team / Espers
// Copyright (c) 2018-2019 The CryptoCoderz Team / INSaNe project
// Copyright (c) 2018-2019 The Rubix project
// Copyright (c) 2018-2019 The Aequitas project
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_GENESIS_H
#define BITCOIN_GENESIS_H

#include "bignum.h"

/** Genesis Start Time */
static const unsigned int timeGenesisBlock = 1558180800; // Saturday, May 18, 2019 12:00:00 PM
/** Genesis TestNet Start Time */
static const unsigned int timeTestNetGenesis = 1558180800+30; // Saturday, May 18, 2019 12:00:30 PM
/** Genesis RegNet Start Time */
static const unsigned int timeRegNetGenesis = 1558180800+90; // Saturday, May 18, 2019 12:01:30 PM
/** Genesis Nonce Mainnet*/
static const unsigned int nNonceMain = 49778;
/** Genesis Nonce Testnet */
static const unsigned int nNonceTest = 13265;
/** Genesis Nonce Regnet */
static const unsigned int nNonceReg = 8;
/** Main Net Genesis Block */
static const uint256 nGenesisBlock("0x0000c552112fe0a5ee2997139e791bf2fa9c15ced39385ed5756d7ca43531b62");
/** Test Net Genesis Block */
static const uint256 hashTestNetGenesisBlock("0x00018de7c1401239894e433c3bae0141a3bb320aa6ed88cd6601f9004b971a4d");
/** Reg Net Genesis Block */
static const uint256 hashRegNetGenesisBlock("0xd13d22b700db8b54f0dee3960949fffc8a6ef2475d50e96888656ab5fe440269");
/** Genesis Merkleroot */
static const uint256 nGenesisMerkle("0x7a5fd9fc575ec5ebee9e2d9ece344ffb75e5bfe0917bbc91ba260cfa1db094e1");

#endif // BITCOIN_GENESIS_H
