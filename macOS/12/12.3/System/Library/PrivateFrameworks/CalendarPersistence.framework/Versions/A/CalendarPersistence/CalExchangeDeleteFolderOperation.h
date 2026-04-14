@class NSManagedObjectID, NSString, EWSBaseFolderIdType;

@interface CalExchangeDeleteFolderOperation : CalExchangePersistentOperation <CalRevertableOperation, CalMessageTraceableOpearation> {
    EWSBaseFolderIdType *_folderId;
    NSManagedObjectID *_folderObjectId;
    NSString *_folderName;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)createRevertOperationInContext:(id)a0 inSession:(id)a1;
- (BOOL)shouldDeletePendingOperation:(id)a0;
- (id)debugTitle;
- (BOOL)executeWithBinding:(id)a0 inSession:(id)a1 inContext:(id)a2 error:(id *)a3;
- (id)folderId;
- (id)messageTracerName;
- (id)messageTracerUUID;
- (id)initWithSessionID:(id)a0 folderId:(id)a1 folderObjectID:(id)a2 folderName:(id)a3;

@end
