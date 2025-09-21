@class CKDMMCSItem, NSMapTable, NSObject, CKDMMCS, CKDMMCSItemGroup, CKSignpost;
@protocol CKDMMCSOperationMethods, CDKMMCSItemGroupContextDelegate;

@interface CKDMMCSItemGroupContext : NSObject <CKDCancelling, CKDMMCSItemReaderWriterDelegateProtocol>

@property (retain, nonatomic) id<CDKMMCSItemGroupContextDelegate> conformingOperation;
@property (readonly, nonatomic) CKSignpost *signpost;
@property (retain, nonatomic) CKDMMCS *MMCS;
@property (retain, nonatomic) CKDMMCSItemGroup *itemGroup;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ commandBlock;
@property (copy, nonatomic) id /* block */ startBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) CKDMMCSItem *MMCSPackageSectionItem;
@property (retain, nonatomic) NSMapTable *MMCSItemsByItemID;
@property (nonatomic) long long mmcsOperationType;
@property (nonatomic) BOOL shouldCloneFileInAssetCache;
@property (readonly, nonatomic) NSObject<CKDMMCSOperationMethods> *operation;
@property (retain, nonatomic) id operationInfo;

+ (struct MMCSItemReaderWriter { } *)getMMCSItemReaderForItemID:(unsigned long long)a0 MMCS:(id)a1 itemGroupContext:(id)a2 downloadChunkContext:(id)a3 error:(id *)a4;

- (BOOL)shouldFetchAssetContentInMemory;
- (id)getCKDMMCSItemReaderByPathForMMCSItem:(id)a0 error:(id *)a1;
- (void)didOpenItemReaderWriter:(id)a0 result:(BOOL)a1 error:(id)a2;
- (BOOL)shouldFetchAssetContentWithReaderWriter;
- (void)start;
- (BOOL)_setupPutMMCSItemsWithError:(id *)a0;
- (void)_startTrackingMMCSItems:(id)a0;
- (void)_stopTrackingMMCSItems:(id)a0;
- (BOOL)didReadFromItemReaderWriter:(id)a0 offset:(unsigned long long)a1 bytes:(char *)a2 length:(unsigned long long)a3 bytesRead:(unsigned long long *)a4 error:(id *)a5;
- (void)cancel;
- (BOOL)shouldFetchAssetContentUsingAssetDownloadStagingManager;
- (id)findTrackedMMCSItemByItemID:(unsigned long long)a0;
- (BOOL)willCloseItemReaderWriter:(id)a0 error:(id *)a1;
- (void)didCompleteRequestWithError:(id)a0;
- (id)didGetFileMetadataItemReaderWriter:(id)a0 fileMetadata:(id)a1 error:(id)a2;
- (BOOL)willOpenItemReaderWriter:(id)a0 error:(id *)a1;
- (void)didCloseItemReaderWriter:(id)a0 result:(BOOL)a1 error:(id)a2;
- (void)didGetItemID:(unsigned long long)a0 signature:(id)a1 path:(id)a2 error:(id)a3 results:(id)a4;
- (void)didPutItemID:(unsigned long long)a0 signature:(id)a1 results:(id)a2;
- (void)didPutSectionWithSignature:(id)a0 results:(id)a1;
- (void)_cleanupMMCSItems;
- (BOOL)willGetFileMetadataItemReaderWriter:(id)a0 error:(id *)a1;
- (void)updateProgressForItemID:(unsigned long long)a0 state:(int)a1 progress:(double)a2 results:(id)a3;
- (BOOL)_setupMMCSItemsWithError:(id *)a0;
- (void)handleCommand:(id)a0 forItem:(id)a1;
- (BOOL)_setupRegisterMMCSItemsWithError:(id *)a0;
- (void)updateProgressForPackageSectionState:(int)a0 progress:(double)a1 results:(id)a2;
- (BOOL)_setupGetMMCSItemsWithError:(id *)a0;
- (void)_cleanupMMCSRegisterItems;
- (BOOL)willReadFromItemReaderWriter:(id)a0 offset:(unsigned long long)a1 bytes:(char *)a2 length:(unsigned long long)a3 bytesRead:(unsigned long long *)a4 error:(id *)a5;
- (id)initWithMMCS:(id)a0 itemGroup:(id)a1 operation:(id)a2 progress:(id /* block */)a3 command:(id /* block */)a4 start:(id /* block */)a5 groupCompletion:(id /* block */)a6;
- (void)updateProgressForItemID:(unsigned long long)a0 state:(int)a1 progress:(double)a2 error:(id)a3;
- (void).cxx_destruct;
- (void)didGetMetricsForRequest:(id)a0;

@end
