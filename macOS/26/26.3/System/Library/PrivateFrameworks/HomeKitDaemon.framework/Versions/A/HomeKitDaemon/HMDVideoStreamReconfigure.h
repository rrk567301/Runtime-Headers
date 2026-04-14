@class HMFTimer, NSString, NSDictionary, HMDCameraStreamSessionInfo, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, HMDVideoStreamReconfigureDelegate;

@interface HMDVideoStreamReconfigure : HMFObject <HMFTimerDelegate, HMFLogging> {
    BOOL _reconfigurationMode;
    NSDictionary *_downlinkQualityInfo;
    NSMutableArray *_reconfigureEvents;
    HMFTimer *_upgradeDebouceTimer;
    HMFTimer *_downgradeDebouceTimer;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDCameraStreamSessionInfo *_streamSessionInfo;
    id<HMDVideoStreamReconfigureDelegate> _delegate;
    double _upgradeInterval;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)downlinkQualityChanged:(id)a0;
- (id)initWithSessionInfo:(id)a0 workQueue:(id)a1 delegate:(id)a2;
- (void)updateReconfigurationMode:(BOOL)a0;

@end
