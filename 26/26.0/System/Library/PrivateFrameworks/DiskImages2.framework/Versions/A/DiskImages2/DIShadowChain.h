@class NSArray, NSMutableArray, NSURL;

@interface DIShadowChain : NSObject <NSSecureCoding, NSCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableArray *nodes;
@property (readonly, nonatomic) NSArray *shadowStats;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSURL *activeShadowURL;
@property (readonly, nonatomic) BOOL hasBaseImageCache;
@property (readonly, nonatomic) NSArray *mountPoints;
@property (nonatomic) BOOL shouldValidate;
@property (readonly, nonatomic) long long topDiskImageNumBlocks;
@property (readonly, nonatomic) NSArray *nonCacheNodes;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)openWritable:(BOOL)a0 createNonExisting:(BOOL)a1;
- (BOOL)addShadowNodes:(id)a0 error:(id *)a1;
- (BOOL)addShadowNodes:(id)a0 wrapReadOnly:(BOOL)a1 error:(id *)a2;
- (BOOL)addShadowURLs:(id)a0 error:(id *)a1;
- (id)statWithError:(id *)a0;
- (BOOL)verifyNodes:(id)a0 error:(id *)a1;

@end
