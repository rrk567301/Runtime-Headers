@class NSManagedObjectID;

@interface CalExchangeCreateAttachmentOperation : CalExchangePersistentOperation <CalRevertableOperation, CalMessageTraceableOpearation> {
    NSManagedObjectID *_attachmentID;
    NSManagedObjectID *_itemObjectID;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)attachmentID;
- (id)createRevertOperationInContext:(id)a0 inSession:(id)a1;
- (BOOL)shouldDeletePendingOperation:(id)a0;
- (id)debugTitle;
- (BOOL)executeWithBinding:(id)a0 inSession:(id)a1 inContext:(id)a2 error:(id *)a3;
- (id)messageTracerName;
- (id)messageTracerUUID;
- (id)initWithSessionID:(id)a0 attachmentID:(id)a1 itemObjectID:(id)a2;

@end
