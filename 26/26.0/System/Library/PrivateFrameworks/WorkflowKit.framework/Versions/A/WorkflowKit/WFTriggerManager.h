@class WFDatabase, NSXPCConnection;

@interface WFTriggerManager : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) WFDatabase *database;

- (id)initWithDatabase:(id)a0;
- (void).cxx_destruct;
- (void)disableTriggersWithIdentifiers:(id)a0;
- (id)allConfiguredTriggers;
- (void)associateWorkflowToTriggerID:(id)a0 deletingExistingReference:(BOOL)a1 notifyDaemon:(BOOL)a2 workflowReference:(id)a3 completion:(id /* block */)a4;
- (void)deleteTriggerWithIdentifier:(id)a0 notifyDaemon:(BOOL)a1 completion:(id /* block */)a2;
- (void)disableAllTriggers;
- (void)disableTriggersWithIdentifiers:(id)a0 withReason:(id)a1;
- (void)saveNewConfiguredTrigger:(id)a0 notifyDaemon:(BOOL)a1 completion:(id /* block */)a2;
- (void)saveNewConfiguredTrigger:(id)a0 workflow:(id)a1 notifyDaemon:(BOOL)a2 completion:(id /* block */)a3;
- (void)storeLoopDetectionForTriggerWithIdentifier:(id)a0 loopDetected:(BOOL)a1;
- (BOOL)updateNotificationLevel:(int)a0 forConfiguredTrigger:(id)a1 error:(id *)a2;
- (id)configuredTriggerWithID:(id)a0;
- (void)deleteTriggersWithIdentifiers:(id)a0 notifyDaemon:(BOOL)a1 completion:(id /* block */)a2;
- (void)saveNewConfiguredTrigger:(id)a0 urlWrapper:(id)a1 notifyDaemon:(BOOL)a2 completion:(id /* block */)a3;
- (void)saveNewConfiguredTrigger:(id)a0 workflowReference:(id)a1 notifyDaemon:(BOOL)a2 completion:(id /* block */)a3;
- (void)updateConfiguredTrigger:(id)a0 triggerID:(id)a1 notifyDaemon:(BOOL)a2 completion:(id /* block */)a3;
- (void)updateConfiguredTrigger:(id)a0 triggerID:(id)a1 urlWrapper:(id)a2 notifyDaemon:(BOOL)a3 completion:(id /* block */)a4;

@end
