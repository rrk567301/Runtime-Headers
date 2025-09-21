@class WFDatabase, NSXPCConnection;

@interface WFTriggerManager : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) WFDatabase *database;

- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (void)disableTriggersWithIdentifiers:(id)a0;
- (id)allConfiguredTriggers;
- (void)associateWorkflowToTriggerID:(id)a0 deletingExistingReference:(char)a1 notifyDaemon:(char)a2 workflowReference:(id)a3 completion:(id /* block */)a4;
- (void)deleteTriggerWithIdentifier:(id)a0 notifyDaemon:(char)a1 completion:(id /* block */)a2;
- (void)disableAllTriggers;
- (void)saveNewConfiguredTrigger:(id)a0 notifyDaemon:(char)a1 completion:(id /* block */)a2;
- (void)saveNewConfiguredTrigger:(id)a0 workflow:(id)a1 notifyDaemon:(char)a2 completion:(id /* block */)a3;
- (char)updateNotificationLevel:(int)a0 forConfiguredTrigger:(id)a1 error:(id *)a2;
- (id)configuredTriggerWithID:(id)a0;
- (void)saveNewConfiguredTrigger:(id)a0 workflowReference:(id)a1 notifyDaemon:(char)a2 completion:(id /* block */)a3;
- (void)updateConfiguredTrigger:(id)a0 triggerID:(id)a1 notifyDaemon:(char)a2 completion:(id /* block */)a3;

@end
