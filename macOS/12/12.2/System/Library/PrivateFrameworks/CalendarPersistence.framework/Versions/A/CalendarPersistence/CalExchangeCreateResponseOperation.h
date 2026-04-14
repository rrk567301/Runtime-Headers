@class NSString, EWSBaseItemIdType, EWSFolderIdType, NSDate, NSManagedObjectID;

@interface CalExchangeCreateResponseOperation : CalExchangePersistentOperation <CalRevertableOperation, CalMessageTraceableOpearation> {
    NSString *_comment;
    NSDate *_proposedStart;
    NSDate *_proposedEnd;
    NSManagedObjectID *_eventID;
    EWSFolderIdType *_folderId;
    EWSBaseItemIdType *_itemId;
    long long _type;
    NSString *_eventName;
    BOOL _suppressNotification;
}

+ (BOOL)supportsSecureCoding;
+ (id)stringWithAutoCommentRemoved:(id)a0;
+ (BOOL)stringHasAutoCommentPrefix:(id)a0;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)type;
- (id)eventID;
- (id)comment;
- (id)createRevertOperationInContext:(id)a0 inSession:(id)a1;
- (BOOL)shouldDeletePendingOperation:(id)a0;
- (id)debugTitle;
- (BOOL)executeWithBinding:(id)a0 inSession:(id)a1 inContext:(id)a2 error:(id *)a3;
- (id)folderId;
- (id)messageTracerName;
- (id)messageTracerUUID;
- (id)itemId;
- (id)initWithSessionID:(id)a0 type:(long long)a1 comment:(id)a2 proposedStart:(id)a3 proposedEnd:(id)a4 folderId:(id)a5 eventID:(id)a6 suppressNotification:(BOOL)a7;
- (id)initWithSessionID:(id)a0 type:(long long)a1 comment:(id)a2 proposedStart:(id)a3 proposedEnd:(id)a4 folderId:(id)a5 itemId:(id)a6 eventName:(id)a7 suppressNotification:(BOOL)a8;
- (id)initWithSessionID:(id)a0 type:(long long)a1 comment:(id)a2 proposedStart:(id)a3 proposedEnd:(id)a4 folderId:(id)a5;

@end
