@class REMStore;

@interface CalLinkREMStoreWrapper : NSObject {
    REMStore *_reminderStore;
}

- (void).cxx_destruct;
- (id)init;
- (id)fetchReminderDataForReminderURLs:(id)a0 error:(id *)a1;

@end
