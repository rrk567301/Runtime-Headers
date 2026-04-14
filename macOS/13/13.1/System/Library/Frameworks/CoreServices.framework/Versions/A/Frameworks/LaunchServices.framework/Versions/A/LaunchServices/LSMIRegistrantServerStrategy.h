@class NSString;

@interface LSMIRegistrantServerStrategy : NSObject <LSMIResultRegistrantStrategy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)preUnregistrationContextForBundleIdentifier:(id)a0;
- (id)notificationJournallerForBundleIdentifier:(id)a0 registeringPlaceholder:(BOOL)a1;
- (void)runSyncBlockInWriteContext:(id /* block */)a0;
- (void)beginModificationOperation;
- (void)endModificationOperation;
- (void)flushModificationState;

@end
