@class NSMapTable;

@interface DADREMLocalDBWatcher : NSObject {
    NSMapTable *_concernedRemindersPartyToBlockMap;
}

+ (id)sharedDBWatcher;

- (void)removeConcernedRemindersParty:(id)a0;
- (void).cxx_destruct;
- (void)registerConcernedRemindersParty:(id)a0 withChangedBlock:(id /* block */)a1;
- (void)remindersDatabaseDidChange;
- (id)init;

@end
