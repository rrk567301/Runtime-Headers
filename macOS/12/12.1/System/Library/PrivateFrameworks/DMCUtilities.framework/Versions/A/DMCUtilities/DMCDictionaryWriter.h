@class NSString, NSDictionary, NSError, DMCFileAccessRepairTool;

@interface DMCDictionaryWriter : NSObject

@property (copy, nonatomic) NSError *serializeError;
@property (copy, nonatomic) NSError *writeError;
@property (copy, nonatomic) NSError *beforeWriteRepairError;
@property (copy, nonatomic) NSError *afterWriteRepairError;
@property (retain, nonatomic) DMCFileAccessRepairTool *repairTool;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, copy, nonatomic) NSString *path;

- (void).cxx_destruct;
- (void)reset;
- (BOOL)writeData:(id)a0 error:(id *)a1;
- (BOOL)write;
- (id)serializedData;
- (id)initWithDictionary:(id)a0 path:(id)a1;
- (id)createRepairTool;
- (void)logStartOfWrite;
- (void)serializeDataAndWriteToStorage;
- (void)logResultOfWrite;
- (BOOL)didWriteSucceed;
- (BOOL)repairAccessIfNecessaryWithError:(id *)a0;

@end
