@class REMSaveRequest, REMReminderChangeItem, REMStore;

@interface WFReminderContentItemChangeTransaction : WFContentItemChangeTransaction

@property (readonly, nonatomic) REMStore *store;
@property (retain, nonatomic) REMSaveRequest *saveRequest;
@property (readonly, nonatomic) REMReminderChangeItem *mutableReminder;

- (void).cxx_destruct;
- (void)updateList:(id)a0;
- (id)initWithContentItem:(id)a0;
- (void)updateSubtasks:(id)a0;
- (void)saveWithCompletionHandler:(id /* block */)a0 isNew:(BOOL)a1;

@end
