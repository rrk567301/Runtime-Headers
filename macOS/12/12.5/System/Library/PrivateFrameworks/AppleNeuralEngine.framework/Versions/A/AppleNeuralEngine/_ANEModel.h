@class _ANEProgramForEvaluation, NSString, NSDictionary, NSURL;

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
@property (readonly, nonatomic) NSURL *modelURL;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) unsigned long long string_id;

+ (id)new;
+ (id)modelAtURL:(id)a0 key:(id)a1;
+ (id)modelAtURL:(id)a0 key:(id)a1 modelAttributes:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithModelAtURL:(id)a0 key:(id)a1 modelAttributes:(id)a2 standardizeURL:(BOOL)a3;
- (BOOL)isEqualToModel:(id)a0;
- (void)updateModelAttributes:(id)a0 state:(unsigned long long)a1;
- (void)updateModelAttributes:(id)a0 state:(unsigned long long)a1 programHandle:(unsigned long long)a2 intermediateBufferHandle:(unsigned long long)a3 queueDepth:(char)a4;
- (void)resetOnUnload;
- (id)keyForBundleID:(id)a0;

@end
