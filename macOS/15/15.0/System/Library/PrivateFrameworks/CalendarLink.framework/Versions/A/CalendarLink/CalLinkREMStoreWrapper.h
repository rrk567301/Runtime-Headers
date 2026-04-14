@class REMStore;

@interface CalLinkREMStoreWrapper : NSObject {
    REMStore *_reminderStore;
}

- (id)init;
- (void).cxx_destruct;
- (id)fetchReminderListNamesForReminderURLs:(id)a0 error:(id *)a1;

@end
