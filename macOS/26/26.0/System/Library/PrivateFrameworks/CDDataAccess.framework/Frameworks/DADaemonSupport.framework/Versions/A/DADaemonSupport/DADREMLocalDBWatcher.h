@class NSMapTable;

@interface DADREMLocalDBWatcher : NSObject {
    NSMapTable *_concernedRemindersPartyToBlockMap;
}

+ (id)sharedDBWatcher;

- (void)remindersDatabaseDidChange;
- (void)removeConcernedRemindersParty:(id)a0;
- (id)init;
- (void)registerConcernedRemindersParty:(id)a0 withChangedBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
