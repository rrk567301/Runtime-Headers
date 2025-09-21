@class NSString;

@interface IMDMessagePTaskXPCStore : NSObject <IMDMessagePTaskStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)_networkCall_IMDMessagePTaskDeleteAllCompletedTask;
- (id)_networkCall_IMDMessagePTaskSelectWithLimit:(long long)a0;
- (char)_networkCall_IMDMessagePTaskUpdateTaskFlagsForGUID:(id)a0 taskFlags:(long long)a1;
- (char)_networkCall_InsertRowGuid:(id)a0 taskFlags:(long long)a1;
- (char)deleteAllCompletedTasks;
- (id)loadMostRecentMessagePTasks;
- (char)storePTask:(id)a0;
- (char)updateTaskFlagsForPTask:(id)a0;

@end
