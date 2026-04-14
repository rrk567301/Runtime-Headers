@class NSMutableOrderedSet;

@interface IMDIndexingMessageScrutinyController : NSObject <IMDIndexingMessageScrutinyController>

@property (retain, nonatomic) NSMutableOrderedSet *blocklistMessageGUIDs;

+ (id)sharedController;

- (void).cxx_destruct;
- (id)init;
- (id)_scrutinyMessagesQueue;
- (void)clearMessageGUIDFromScrutiny:(id)a0;
- (BOOL)isMessageBlocklisted:(id)a0;
- (void)setMessageGUIDUnderScrutiny:(id)a0;

@end
