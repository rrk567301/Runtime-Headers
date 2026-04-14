@class EWSFolderIdType;

@interface CalExchangeSyncDeletedItemsFolderOperation : CalExchangeOperation {
    EWSFolderIdType *_folderId;
}

- (void)dealloc;
- (id)debugDescription;
- (id)initWithSession:(id)a0 folderId:(id)a1;
- (id)debugTitle;
- (BOOL)executeWithBinding:(id)a0 inSession:(id)a1 inContext:(id)a2 error:(id *)a3;
- (id)folderId;

@end
