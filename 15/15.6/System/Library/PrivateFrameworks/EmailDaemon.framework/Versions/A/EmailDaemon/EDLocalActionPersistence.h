@class ECLocalMessageActionID, NSString, EDGmailLabelPersistence, EDPersistenceDatabase, NSObject;
@protocol OS_os_log;

@interface EDLocalActionPersistence : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EDPersistenceDatabase *database;
@property (readonly, nonatomic) EDGmailLabelPersistence *gmailLabelPersistence;
@property (readonly, copy, nonatomic) ECLocalMessageActionID *latestActionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionFlagsTableSchema;
+ (id)actionLabelsTableSchema;
+ (id)actionMessagesTableSchema;
+ (id)localMessageActionsTableSchema;
+ (id)tablesAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (char)moveSupportedFromMailboxURL:(id)a0 toURL:(id)a1;
- (char)_addActionMessageForMessage:(id)a0 destinationMessage:(id)a1 actionID:(long long)a2 actionPhase:(long long)a3 connection:(id)a4;
- (char)_addActionMessageForSourceRemoteID:(id)a0 actionID:(long long)a1 connection:(id)a2;
- (char)_addFlagChange:(id)a0 actionID:(long long)a1 connection:(id)a2;
- (void)_deleteCopyItems:(id)a0 actionID:(long long)a1 connection:(id)a2;
- (void)_findMessagesForAction:(long long)a0 remoteIDs:(id)a1 messages:(id)a2 connection:(id)a3;
- (id)_flagChangeActionForRow:(id)a0 connection:(id)a1;
- (id)_flagChangeAllActionForRow:(id)a0 connection:(id)a1;
- (id)_flagChangeForAction:(long long)a0 connection:(id)a1;
- (id)_labelChangeActionForRow:(id)a0 connection:(id)a1;
- (char)_setLabelsOnAction:(long long)a0 labels:(id)a1 add:(char)a2 connection:(id)a3;
- (id)_sourceRemoteIDListForCopyItems:(id)a0;
- (id)_transferActionForRow:(id)a0 connection:(id)a1 failedMessages:(id)a2;
- (id)_transferUndownloadedActionForRow:(id)a0 connection:(id)a1;
- (void)_updateCopyItems:(id)a0 toPhase:(long long)a1 actionID:(long long)a2 connection:(id)a3;
- (id)_whereClauseToFindCopyItems:(id)a0;
- (id)initWithDatabase:(id)a0 gmailLabelPersistence:(id)a1;
- (char)mailboxURLIsInRemoteAccount:(id)a0;
- (id)messageActionsForAccountURL:(id)a0 previousActionID:(long long)a1;
- (id)messageForDatabaseID:(long long)a0;
- (char)persistFlagChangeAction:(id)a0;
- (char)persistFlagChangeUndownloadedAction:(id)a0;
- (char)persistLabelChangeAction:(id)a0;
- (char)persistTransferAction:(id)a0;
- (char)persistTransferUndownloadedAction:(id)a0;
- (void)removeMessageAction:(long long)a0;
- (void)removeMessageActions:(id)a0;
- (void)updateFlagChangeAction:(id)a0 withRemainingUIDs:(id)a1;
- (char)updateTransferAction:(id)a0 withResults:(id)a1;
- (char)updateTransferUndownloadedMessageAction:(id)a0 withResults:(id)a1;

@end
