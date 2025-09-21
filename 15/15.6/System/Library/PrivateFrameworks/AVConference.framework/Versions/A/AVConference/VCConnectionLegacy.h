@class NSString, NSUUID;

@interface VCConnectionLegacy : VCConnection <VCConnectionProtocol>

@property (readonly) struct tagCONNRESULT { unsigned int x0; int x1; int x2; unsigned int x3; int x4; int x5; unsigned short x6; unsigned short x7; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x8; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x9; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x10; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x11; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x12; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x13; unsigned int x14; int x15; int x16; int x17; int x18; unsigned short x19; int x20; int x21; int x22; struct tagCONNRESULT *x23; int x24; } *connectionResult;
@property char waitToBeNominated;
@property (readonly) unsigned short relayChannelNumber;
@property (readonly) char isUpgraded;
@property (readonly) char isReplaceOnly;
@property (readonly) char isLocalOn5G;
@property (readonly) char isRemoteOn5G;
@property (readonly) char isLocalDelegated;
@property (readonly) char isRemoteDelegated;
@property (readonly) char isVirtualRelayLink;
@property (readonly) char isWifiToWifi;
@property (readonly) NSString *localInterfaceName;
@property int connectionMTU;
@property int maxConnectionMTU;
@property (readonly) char isVPN;
@property (readonly) char serverIsDegraded;
@property (readonly) NSUUID *connectionUUID;
@property (readonly) int localConnectionType;
@property (readonly) int remoteConnectionType;
@property (readonly) unsigned int type;
@property (readonly) NSString *localInterfaceTypeString;
@property (readonly) NSString *remoteInterfaceTypeString;
@property unsigned int uplinkAudioBitrateCapOneToOne;
@property unsigned int uplinkBitrateCapOneToOne;
@property unsigned int uplinkBitrateCap;
@property unsigned int downlinkBitrateCap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copy;
- (int)cellularMTU;
- (id)initWithCandidatePair:(struct tagCANDIDATEPAIR { struct tagCANDIDATE { int x0; int x1; unsigned int x2; unsigned char x3[8]; unsigned short x4; unsigned short x5; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x6; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x7; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x8; unsigned int x9; } x0; struct tagCANDIDATE { int x0; int x1; unsigned int x2; unsigned char x3[8]; unsigned short x4; unsigned short x5; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x6; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x7; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x8; unsigned int x9; } x1; int x2; unsigned short x3; unsigned short x4; unsigned char x5[8]; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x6; unsigned int x7; int x8; int x9; int x10; int x11; int x12; int x13; int x14; int x15; struct tagCANDIDATEPARIR *x16; } *)a0;
- (id)initWithConnectionResult:(struct tagCONNRESULT { unsigned int x0; int x1; int x2; unsigned int x3; int x4; int x5; unsigned short x6; unsigned short x7; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x8; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x9; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x10; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x11; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x12; struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } x13; unsigned int x14; int x15; int x16; int x17; int x18; unsigned short x19; int x20; int x21; int x22; struct tagCONNRESULT *x23; int x24; } *)a0 type:(unsigned int)a1;
- (char)isLocalIPPort:(struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)a0;
- (char)isOnSameIPPortWithConnection:(id)a0;
- (void)setUpVTable;
- (unsigned short)updateMaxConnectionMTU:(unsigned short)a0;

@end
