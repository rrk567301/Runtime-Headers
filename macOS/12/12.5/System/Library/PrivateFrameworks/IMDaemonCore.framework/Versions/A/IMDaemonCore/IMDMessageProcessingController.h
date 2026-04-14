@class NSTimer;
@protocol IMDMessagePTaskStore;

@interface IMDMessageProcessingController : NSObject

@property (retain, nonatomic) id<IMDMessagePTaskStore> pTaskStore;
@property (retain, nonatomic) NSTimer *processingTimer;

- (void)dealloc;
- (id)init;
- (void)messageProcessingTaskAdded:(id)a0;
- (id)initWithMessagesPTaskStore:(id)a0;
- (void)_scheduleDeferredProcessingWithTimeInterval:(double)a0;
- (void)_processingTimerFired;
- (void)_indexSpotlightIfNeedForPTask:(id)a0;
- (BOOL)_pref_IMDCoreSpotlightHasMigrated;
- (void)_xpc_IMDCoreSpotlightAddMessageGUID:(id)a0;
- (void)scheduleInitialProcessingCheck;

@end
