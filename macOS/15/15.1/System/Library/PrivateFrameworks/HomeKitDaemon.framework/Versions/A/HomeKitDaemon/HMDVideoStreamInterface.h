@class HMFOSTransaction, NSNumber, NSString, NSObject, HMDVideoStreamReconfigure;
@protocol HMDVideoStreamLastDecodedFrameDelegate, HMDVideoStreamInterfaceDataSource, HMDVideoStreamInterfaceDelegate, HMDAVCVideoStream, OS_dispatch_queue;

@interface HMDVideoStreamInterface : HMDStreamInterface <HMDAVCVideoStreamDelegate, HMDVideoStreamReconfigureDelegate>

@property (readonly) id<HMDAVCVideoStream> videoStream;
@property (readonly) HMDVideoStreamReconfigure *videoStreamReconfigure;
@property (readonly) id<HMDVideoStreamInterfaceDataSource> dataSource;
@property (retain) NSObject<OS_dispatch_queue> *lastFrameDelegateQueue;
@property (weak) id<HMDVideoStreamLastDecodedFrameDelegate> lastFrameDelegate;
@property (retain) HMFOSTransaction *snapshotDataTransaction;
@property (readonly, nonatomic) NSNumber *syncSource;
@property (readonly, nonatomic) NSNumber *streamToken;
@property (weak) id<HMDVideoStreamInterfaceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (int)_createLocalRTPSocketWithRemoteSender:(id)a0 localNetworkConfig:(id)a1;
+ (id)_createLocalStreamAndRTPSocket:(int *)a0 localNetworkConfig:(id)a1;
+ (id)_createStreamWithRemoteDestinationReceiver:(id)a0;
+ (id)_createStreamWithRemoteSocketReceiver:(id)a0;
+ (id)_createVideoStreamWithSessionHandler:(id)a0 localNetworkConfig:(id)a1 localRTPSocket:(int *)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)stream:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)streamDidRTCPTimeOut:(id)a0;
- (void)streamDidRTPTimeOut:(id)a0;
- (void)streamDidServerDie:(id)a0;
- (void)streamDidStop:(id)a0;
- (id)logIdentifier;
- (void)stopStream;
- (void)captureSnapshot;
- (void)stream:(id)a0 didGetLastDecodedFrame:(id)a1;
- (void)stream:(id)a0 didUpdateVideoConfiguration:(BOOL)a1 error:(id)a2;
- (void)stream:(id)a0 downlinkQualityDidChange:(id)a1;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 delegate:(id)a2 delegateQueue:(id)a3 sessionHandler:(id)a4 videoStream:(id)a5 localRTPSocket:(int)a6 videoStreamReconfigure:(id)a7 dataSource:(id)a8;
- (void)_callDidGetLastDecodedFrame:(id)a0;
- (void)_callDidUpdateConfiguration;
- (void)_callNetworkDeteriorated;
- (void)_callNetworkImproved;
- (void)_callStarted:(id)a0;
- (void)_callStopped:(id)a0;
- (void)_startStreamWithConfig:(id)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 delegate:(id)a2 delegateQueue:(id)a3 sessionHandler:(id)a4 localNetworkConfig:(id)a5;
- (void)setSnapshotDelegate:(id)a0 delegateQueue:(id)a1;
- (void)startStreamWithConfig:(id)a0;
- (void)updateReconfigurationMode:(BOOL)a0;
- (void)updateStreamConfiguration:(id)a0;
- (void)videoStreamReconfigureDidNetworkDeteriorate:(id)a0;
- (void)videoStreamReconfigureDidNetworkImprove:(id)a0;

@end
