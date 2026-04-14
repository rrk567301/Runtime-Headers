@class NSMapTable;

@interface DADREMLocalDBWatcher : NSObject {
    NSMapTable *_concernedRemindersPartyToBlockMap;
}

+ (id)sharedDBWatcher;

- (void).cxx_destruct;
- (void)registerConcernedRemindersParty:(id)a0 withChangedBlock:(id /* block */)a1;
- (void)removeConcernedRemindersParty:(id)a0;
- (id)init;
- (void)remindersDatabaseDidChange;

@end
