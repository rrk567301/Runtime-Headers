@class NSArray, NSMutableArray, NSURL;

@interface DIShadowChain : NSObject <NSSecureCoding, NSCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSMutableArray *nodes;
@property (readonly, nonatomic) NSArray *shadowStats;
@property (readonly, nonatomic) char isEmpty;
@property (readonly, nonatomic) NSURL *activeShadowURL;
@property (readonly, nonatomic) char hasBaseImageCache;
@property (readonly, nonatomic) NSArray *mountPoints;
@property (nonatomic) char shouldValidate;
@property (readonly, nonatomic) long long topDiskImageNumBlocks;
@property (readonly, nonatomic) NSArray *nonCacheNodes;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)openWritable:(char)a0 createNonExisting:(char)a1;
- (char)addShadowNodes:(id)a0 error:(id *)a1;
- (char)addShadowURLs:(id)a0 error:(id *)a1;
- (id)statWithError:(id *)a0;
- (char)verifyNodes:(id)a0 error:(id *)a1;

@end
