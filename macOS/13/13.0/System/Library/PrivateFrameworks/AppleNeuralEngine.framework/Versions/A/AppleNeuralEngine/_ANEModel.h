@class _ANEProgramForEvaluation, NSString, NSDictionary, NSURL, _ANEProgramIOSurfacesMapper;

@interface _ANEModel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *modelAttributes;
@property (nonatomic) unsigned long long programHandle;
@property (nonatomic) char queueDepth;
@property (nonatomic) unsigned long long intermediateBufferHandle;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } l;
@property (retain, nonatomic) _ANEProgramForEvaluation *program;
@property (nonatomic) unsigned int perfStatsMask;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) _ANEProgramIOSurfacesMapper *mapper;
@property (nonatomic) unsigned long long string_id;
@property (readonly, nonatomic) NSURL *modelURL;
@property (readonly, copy, nonatomic) NSString *key;

+ (id)new;
+ (id)modelAtURL:(id)a0 key:(id)a1;
+ (id)modelAtURL:(id)a0 key:(id)a1 modelAttributes:(id)a2;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithModelAtURL:(id)a0 key:(id)a1 modelAttributes:(id)a2 standardizeURL:(BOOL)a3 string_id:(unsigned long long)a4 generateNewStringId:(BOOL)a5;
- (id)initWithModelAtURL:(id)a0 key:(id)a1 modelAttributes:(id)a2 standardizeURL:(BOOL)a3;
- (void)updateModelAttributes:(id)a0 state:(unsigned long long)a1;
- (void)updateModelAttributes:(id)a0 state:(unsigned long long)a1 programHandle:(unsigned long long)a2 intermediateBufferHandle:(unsigned long long)a3 queueDepth:(char)a4;
- (void)resetOnUnload;
- (id)procedureInfoForProcedureIndex:(unsigned int)a0;
- (id)symbolIndicesForProcedureIndex:(unsigned int)a0 indexArrayKey:(id)a1;
- (id)inputSymbolIndicesForProcedureIndex:(unsigned int)a0;
- (id)outputSymbolIndicesForProcedureIndex:(unsigned int)a0;
- (BOOL)isEqualToModel:(id)a0;

@end
