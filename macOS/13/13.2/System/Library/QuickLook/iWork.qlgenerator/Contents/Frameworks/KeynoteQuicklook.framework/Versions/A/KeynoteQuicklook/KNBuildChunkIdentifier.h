@class NSUUID;

@interface KNBuildChunkIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) NSUUID *buildUUID;
@property (readonly, nonatomic) int chunkID;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

+ (id)emptyIdentifier;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithMessage:(const void *)a0;
- (id)initEmptyIdentifier;
- (id)initWithBuild:(id)a0 chunkID:(int)a1;
- (id)resolveToChunkUsingContext:(id)a0;
- (id)resolveToChunkOnSlide:(id)a0;
- (void)saveToMessage:(void *)a0;

@end
