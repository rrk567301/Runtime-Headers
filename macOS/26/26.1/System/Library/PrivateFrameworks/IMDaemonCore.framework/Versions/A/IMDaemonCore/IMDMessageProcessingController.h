@class NSTimer;
@protocol IMDMessagePTaskStore;

@interface IMDMessageProcessingController : NSObject

@property (retain, nonatomic) id<IMDMessagePTaskStore> pTaskStore;
@property (retain, nonatomic) NSTimer *processingTimer;

- (void)_scheduleDeferredProcessingWithTimeInterval:(double)a0;
- (void)scheduleInitialProcessingCheck;
- (void)_indexSpotlightIfNeedForPTask:(id)a0;
- (id)initWithMessagesPTaskStore:(id)a0;
- (void)_xpc_IMDCoreSpotlightAddMessageGUID:(id)a0 reason:(long long)a1;
- (void)dealloc;
- (BOOL)_pref_IMDCoreSpotlightHasMigrated;
- (void)_processingTimerFired;
- (void)messageProcessingTaskAdded:(id)a0;
- (id)init;

@end
