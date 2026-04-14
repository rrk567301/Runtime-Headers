@class ASDTStreamSession, IOSurface, ASDTMSGController;

@interface ASDTSCStream : ASDTStream {
    unsigned int _msgLocalSyncIDs[2];
    unsigned int _msgRemoteSyncIDs[2];
}

@property (nonatomic) BOOL initCompleted;
@property (nonatomic) unsigned int bufferPackets;
@property (nonatomic) unsigned int bufferPeriodUs;
@property (nonatomic) unsigned int bufferSize;
@property (readonly, nonatomic) struct ASDTTime { long long x0; long long x1; unsigned short x2; unsigned short x3; unsigned int x4; } msgPeriod;
@property (nonatomic) unsigned int scStreamID;
@property (nonatomic) BOOL scStreamIDisRaw;
@property (readonly, nonatomic) unsigned int scStreamIDRaw;
@property (nonatomic) unsigned int scClientCode;
@property (nonatomic) int msgStartOffsetUs;
@property (nonatomic) int msgStartRemoteOffsetUs;
@property (nonatomic) struct ASDTTime { long long nsec; long long hostTicks; unsigned short hostFrac; unsigned short kind; unsigned int reserved; } configMSGLocalOffset;
@property (nonatomic) struct ASDTTime { long long nsec; long long hostTicks; unsigned short hostFrac; unsigned short kind; unsigned int reserved; } configMSGRemoteOffset;
@property (nonatomic) struct ASDTTime { long long nsec; long long hostTicks; unsigned short hostFrac; unsigned short kind; unsigned int reserved; } configMSGPeriod;
@property (nonatomic) struct ASDTTime { long long nsec; long long hostTicks; unsigned short hostFrac; unsigned short kind; unsigned int reserved; } masterMSGPeriod;
@property (nonatomic) struct ASDTStreamSessionRequirements { unsigned int msgLocalSyncIDs[2]; unsigned int msgRemoteSyncIDs[2]; unsigned int bufferSizeAlignment; unsigned int frameSizeAlignment; unsigned int ioSurfaceCacheMode; unsigned int ioSurfacePixelFormat; } sessionRequirements;
@property (nonatomic) int sessionLoopback;
@property (nonatomic) BOOL useRemote;
@property (nonatomic) BOOL sessionVerbose;
@property (readonly, nonatomic) unsigned int packetSize;
@property (retain, nonatomic) IOSurface *ioSurface;
@property (nonatomic) unsigned int sessionPacketSize;
@property (nonatomic) unsigned int sessionBufferSize;
@property (retain, nonatomic) ASDTStreamSession *localStreamSession;
@property (retain, nonatomic) ASDTStreamSession *remoteStreamSession;
@property (retain, nonatomic) ASDTMSGController *localMSGController;
@property (retain, nonatomic) ASDTMSGController *remoteMSGController;
@property (nonatomic) unsigned long long ioSampleTime;

- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned int)ioBufferSize;
- (void)startStream;
- (void)stopStream;
- (BOOL)changePhysicalFormat:(id)a0;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (BOOL)configureStream;
- (BOOL)configureIOSurface;
- (id)createStreamSessionWithConfig:(struct ASDTStreamSessionConfig { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; BOOL x7; BOOL x8; BOOL x9; } *)a0;
- (BOOL)getMSGSyncConfig:(struct ASDTMSGSyncConfig { struct ASDTTime { long long x0; long long x1; unsigned short x2; unsigned short x3; unsigned int x4; } x0; unsigned int x1; unsigned short x2; } *)a0 forMaster:(BOOL)a1 fromRemote:(BOOL)a2;
- (id)initWithConfig:(id)a0 withDevice:(id)a1;
- (char *)ioBuffer;
- (unsigned int)msgLocalMasterSyncID;
- (unsigned int)msgLocalSlaveSyncID;
- (struct ASDTTime { long long x0; long long x1; unsigned short x2; unsigned short x3; unsigned int x4; })msgOffsetForRemote:(BOOL)a0;
- (struct ASDTTime { long long x0; long long x1; unsigned short x2; unsigned short x3; unsigned int x4; })msgPeriod;
- (unsigned int)msgRemoteMasterSyncID;
- (unsigned int)msgRemoteSlaveSyncID;
- (unsigned int)packetSizeForMSGPeriod:(struct ASDTTime { long long x0; long long x1; unsigned short x2; unsigned short x3; unsigned int x4; })a0;
- (int)prewarmStream:(int)a0;
- (unsigned int)safetyOffset;
- (unsigned int)scStreamIDRaw;
- (BOOL)setupMSGSyncIDs:(id)a0;
- (BOOL)setupMSGSyncIDs:(unsigned int *)a0 withSyncIDsFromStream:(const unsigned int *)a1 withMSGController:(id)a2;
- (BOOL)setupMSGSyncOnRemote:(BOOL)a0;
- (BOOL)setupMasterMSGPeriod;
- (int)setupStream;
- (int)streamSessionStart:(id)a0;
- (id /* block */)updateClientPositionBlock;

@end
