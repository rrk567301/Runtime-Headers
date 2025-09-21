@class NSTimer;
@protocol IMDMessagePTaskStore;

@interface IMDMessageProcessingController : NSObject

@property (retain, nonatomic) id<IMDMessagePTaskStore> pTaskStore;
@property (retain, nonatomic) NSTimer *processingTimer;

- (void)_indexSpotlightIfNeedForPTask:(id)a0;
- (void)dealloc;
- (void)_processingTimerFired;
- (BOOL)_pref_IMDCoreSpotlightHasMigrated;
- (void)messageProcessingTaskAdded:(id)a0;
- (id)init;
- (void)_xpc_IMDCoreSpotlightAddMessageGUID:(id)a0 reason:(long long)a1;
- (id)initWithMessagesPTaskStore:(id)a0;
- (void)scheduleInitialProcessingCheck;
- (void)_scheduleDeferredProcessingWithTimeInterval:(double)a0;

@end
