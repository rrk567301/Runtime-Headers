@class PipeDataTransfer, CBScalablePipe, NSObject;
@protocol OS_dispatch_source, OS_voucher;

@interface PipeInfo : NSObject {
    struct pthread_override_s { } *_qosOverride;
    struct pthread_override_s { } *_socketThreadQOSOverride;
}

@property (retain) NSObject<OS_dispatch_source> *pipeReadSource;
@property (retain) CBScalablePipe *pipe;
@property (retain) NSObject<OS_voucher> *voucher;
@property char newProtocol;
@property char versionInfoSent;
@property char versionInfoReceived;
@property char pipeDidConnectSent;
@property unsigned char version;
@property unsigned int supportedFeatures;
@property (retain) PipeDataTransfer *pipeDataTransfer;
@property (retain) PipeDataTransfer *ackData;
@property unsigned char localVersion;
@property unsigned int localSupportedFeatures;
@property char useConnectStatusPDU;
@property char connectionInitiator;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)applyQOSOverride;
- (void)releaseQOSOverride;

@end
