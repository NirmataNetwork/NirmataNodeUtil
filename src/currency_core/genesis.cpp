// Copyright (c) 2023 Nirmata Network
// Copyright (c) 2014-2018 Zano Project
// Copyright (c) 2014-2018 The Louisdor Project
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "genesis.h"

namespace currency
{
#ifndef TESTNET
	const genesis_tx_raw_data ggenesis_tx_raw = {{
	0xdce0800400000101,0x21030f8edd96bb82,0xeede69823aa5c094,0xcdaf64dabbeb4763,0x8a938017e60cc79a,0x001d896193761585,0x84f4bbedb7fb8080,0x2f695a287a230305,0xf39fee3d7f28519e,0x8a5f1505dd196b2b,0x46928e493c463633,0xe092e6e0800035dd,0x072ec9030584f49e,0x554c6a77e2504457,0xd9001698347c77ae,0xcd3278189e7da9c4,0xe080004fbd898347,0x030584f49ee092e6,0xbca3df03e811d374,0x9eff2dd6059c12d7,0x6f0f93733c1120be,0xd807f7327f98d41b,0x87eaf15b6e160800,0xe2eda598147d7bf8,0xd1c4880b3c77e624,0xd9d7992eef0c8c0c,0x62346120138b8864,0x6563373764306561,0x6533326264656361,0x6166656233383366,0x0b00153961363566,0x0b64ea020bd96f02,0x0ed1fe020b5f3302},
	{0x0a,0x00,0x00}};

#else
	const genesis_tx_raw_data ggenesis_tx_raw = {{
	0xbc03000100000101,0xdc5f9ae7884b897c,0xe2f9ba2269b54e52,0x034c9438ca244683,0x00e5681894012ee5,0x42279122a74a1605,0x2d397ab5ee629a22,0x1b44a9cb119c005f,0xf2c98481409942e7,0x364345322813ead0,0x4433434632363946,0x3243373938303634,0x3344313545464543,0x4336364141373930,0x020b001542303030},
	{0x3f,0xb6,0x0e,0x0a,0x00,0x00}};
#endif
}
