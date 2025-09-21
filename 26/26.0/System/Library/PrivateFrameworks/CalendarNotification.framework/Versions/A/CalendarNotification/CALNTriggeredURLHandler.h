@protocol EKEventStoreProvider, CALNAlarmEngineMonitor, CALNURLHandler;

@interface CALNTriggeredURLHandler : NSObject

@property (readonly, nonatomic) id<EKEventStoreProvider> storeProvider;
@property (readonly, nonatomic) id<CALNAlarmEngineMonitor> alarmEngineMonitor;
@property (readonly, nonatomic) id<CALNURLHandler> fileOpener;

- (void)dealloc;
- (void)_alertsFired:(id)a0;
- (void).cxx_destruct;
- (id)fetchTriggerURLWithAlarmExternalID:(id)a0 databaseID:(int)a1;
- (id)initWithEventStoreProvider:(id)a0 alarmEngineMonitor:(id)a1 fileOpener:(id)a2;
- (void)openFileForAlert:(id)a0 triggerURL:(id)a1;

@end
