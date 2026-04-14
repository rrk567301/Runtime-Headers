@class NSMapTable;

@interface DADREMLocalDBWatcher : NSObject {
    NSMapTable *_concernedRemindersPartyToBlockMap;
}

+ (id)sharedDBWatcher;

- (void)registerConcernedRemindersParty:(id)a0 withChangedBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)remindersDatabaseDidChange;
- (id)init;
- (void)removeConcernedRemindersParty:(id)a0;

@end
