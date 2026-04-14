@class NSString, IDSKVStore;

@interface IMDReplayStorageController : NSObject

@property (retain, nonatomic) IDSKVStore *store;
@property (readonly, retain, nonatomic) NSString *filePath;

- (id)copyNextBatchWithSize:(unsigned long long)a0 iterationContext:(id *)a1;
- (BOOL)storeDictionary:(id)a0 error:(id *)a1;
- (id)initWithFilePath:(id)a0;
- (void)deleteReplayDB;
- (void)dealloc;

@end
