@class FISubOperation, FINodePropertyList, NSString, FINode;

@interface FINewFolderOperation : FIOperation

@property (retain, nonatomic) FISubOperation *subOperation;
@property (retain, nonatomic) FINodePropertyList *propertyList;
@property (readonly) NSString *rawName;
@property (readonly) FINode *folderNode;
@property (copy, nonatomic) id /* block */ nameConflictHandler;
@property (copy, nonatomic) id /* block */ postOpRenameHandler;

- (void).cxx_destruct;
- (void)schedule;
- (id)_initWithName:(id)a0 destinationFolderNode:(id)a1 propertyList:(id)a2;
- (id)initWithName:(id)a0 destinationFolder:(id)a1 propertyList:(id)a2;
- (BOOL)isRenaming;
- (id)makeOperationRecordForNode:(id)a0;
- (id)nameConflictHandler:(id)a0 fileExtension:(id)a1 error:(id *)a2;
- (BOOL)postOpRenameHandler:(id)a0 suboperation:(unsigned int)a1;
- (void)startFSOperationFailed:(id)a0 markCancelled:(BOOL)a1 error:(id)a2;
- (void)tearDownCallbacks;

@end
