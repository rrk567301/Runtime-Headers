@class EWSAttachmentIdType, NSString, NSManagedObjectID;

@interface CalExchangeDeleteAttachmentOperation : CalExchangePersistentOperation <CalRevertableOperation, CalMessageTraceableOpearation> {
    EWSAttachmentIdType *_attachmentId;
    NSManagedObjectID *_attachmentObjectId;
    NSManagedObjectID *_itemObjectID;
    NSString *_attachmentName;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)attachmentId;
- (id)createRevertOperationInContext:(id)a0 inSession:(id)a1;
- (BOOL)shouldDeletePendingOperation:(id)a0;
- (id)debugTitle;
- (BOOL)executeWithBinding:(id)a0 inSession:(id)a1 inContext:(id)a2 error:(id *)a3;
- (id)messageTracerName;
- (id)messageTracerUUID;
- (id)initWithSessionID:(id)a0 attachmentId:(id)a1 attachmentObjectID:(id)a2 itemObjectID:(id)a3 attachmentName:(id)a4;

@end
