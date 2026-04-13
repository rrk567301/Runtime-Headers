@class NSManagedObjectID, NSString, EWSBaseItemIdType;

@interface CalExchangeDeleteItemOperation : CalExchangePersistentOperation <CalRevertableOperation, CalDeleteCalendarItemOperation, CalMessageTraceableOpearation> {
    EWSBaseItemIdType *_itemId;
    NSManagedObjectID *_itemObjectID;
    NSString *_itemName;
    int _itemType;
    BOOL _shouldSendCancellation;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)objectID;
- (id)errorDescription;
- (id)createRevertOperationInContext:(id)a0 inSession:(id)a1;
- (BOOL)shouldDeletePendingOperation:(id)a0;
- (id)debugTitle;
- (BOOL)executeWithBinding:(id)a0 inSession:(id)a1 inContext:(id)a2 error:(id *)a3;
- (id)messageTracerName;
- (id)messageTracerUUID;
- (BOOL)deleteItemsWithIds:(id)a0 binding:(id)a1 inContext:(id)a2 error:(id *)a3;
- (id)initWithSessionID:(id)a0 itemId:(id)a1 itemObjectID:(id)a2 itemName:(id)a3 itemType:(int)a4 shouldSendCancellation:(BOOL)a5;
- (id)itemId;

@end
