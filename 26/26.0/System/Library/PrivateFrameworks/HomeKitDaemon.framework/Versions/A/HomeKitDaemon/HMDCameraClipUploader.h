@class NSDate, NSString, HMCameraClipEncryptionManager, NSUUID, NSDictionary, NSMutableArray, NSObject, HMBLocalZone, NAFuture;
@protocol OS_dispatch_queue, HMDCameraClipUploaderFactory, HMDCameraClipUploadingDelegate;

@interface HMDCameraClipUploader : HMFObject <HMFLogging, HMDCameraClipUploading>

@property (readonly, copy) NSDate *startDate;
@property (readonly) double targetFragmentDuration;
@property (readonly) long long quality;
@property (readonly) HMBLocalZone *localZone;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSString *logIdentifier;
@property (readonly) HMCameraClipEncryptionManager *encryptionManager;
@property (readonly) id<HMDCameraClipUploaderFactory> factory;
@property (readonly) NSMutableArray *operations;
@property (retain) NAFuture *didCreateClipFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSUUID *clipUUID;
@property (weak) id<HMDCameraClipUploadingDelegate> delegate;
@property (readonly, copy) NSDictionary *stateDump;

+ (id)logCategory;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (void)finishWithCompletionHandler:(id /* block */)a0;
- (id)_addOperation:(id)a0 isFinalOperation:(BOOL)a1;
- (id)_createClip;
- (id)_createClipWithSignificantEvent:(id)a0;
- (void)_handleFatalOperationFailureDueToError:(id)a0;
- (BOOL)_isCancelledError:(id)a0;
- (void)_operationCompleted:(id)a0 isFinalOperation:(BOOL)a1 future:(id)a2;
- (void)_startNextOperation;
- (void)addSignificantEvent:(id)a0 completionHandler:(id /* block */)a1;
- (void)addVideoInitData:(id)a0 completionHandler:(id /* block */)a1;
- (void)addVideoSegmentData:(id)a0 timeOffsetWithinClip:(double)a1 duration:(double)a2 clipFinalizedBecauseMaxDurationExceeded:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)createClipWithCompletionHandler:(id /* block */)a0;
- (BOOL)hasAddedCreateClipOperation;
- (id)initWithClipUUID:(id)a0 startDate:(id)a1 targetFragmentDuration:(double)a2 quality:(long long)a3 localZone:(id)a4 workQueue:(id)a5 logIdentifier:(id)a6;
- (id)initWithClipUUID:(id)a0 startDate:(id)a1 targetFragmentDuration:(double)a2 quality:(long long)a3 localZone:(id)a4 workQueue:(id)a5 logIdentifier:(id)a6 encryptionManager:(id)a7 factory:(id)a8;

@end
