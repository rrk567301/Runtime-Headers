@class _ANEProgramForEvaluation, NSString, NSDictionary, NSURL, _ANEInMemoryModelDescriptor, _ANEClient;

@interface _ANEInMemoryModel : NSObject

@property (readonly, nonatomic) _ANEClient *sharedConnection;
@property (retain, nonatomic) NSDictionary *modelAttributes;
@property (retain, nonatomic) NSURL *modelURL;
@property (readonly, nonatomic) BOOL isMILModel;
@property (copy, nonatomic) NSString *compilerOptionsFileName;
@property (readonly, nonatomic) unsigned long long string_id;
@property (nonatomic) unsigned long long programHandle;
@property (nonatomic) char queueDepth;
@property (nonatomic) unsigned long long intermediateBufferHandle;
@property (retain, nonatomic) _ANEProgramForEvaluation *program;
@property (nonatomic) unsigned int perfStatsMask;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) _ANEInMemoryModelDescriptor *descriptor;
@property (readonly, copy, nonatomic) NSString *hexStringIdentifier;

+ (void)initialize;
+ (id)new;
+ (id)inMemoryModelWithDescriptor:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)unloadWithQoS:(unsigned int)a0 error:(id *)a1;
- (BOOL)loadWithQoS:(unsigned int)a0 options:(id)a1 error:(id *)a2;
- (BOOL)evaluateWithQoS:(unsigned int)a0 options:(id)a1 request:(id)a2 error:(id *)a3;
- (id)localModelPath;
- (id)initWithDesctiptor:(id)a0;
- (id)saveModelFiles;
- (id)compilerOptionsWithOptions:(id)a0 isCompiledModelCached:(BOOL)a1;
- (BOOL)compiledModelExists;
- (BOOL)compileWithQoS:(unsigned int)a0 options:(id)a1 error:(id *)a2;
- (void)purgeCompiledModel;

@end
