@class NSArray;

@interface MTLRenderPipelineFunctionsDescriptor : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *vertexAdditionalBinaryFunctions;
@property (copy, nonatomic) NSArray *fragmentAdditionalBinaryFunctions;
@property (copy, nonatomic) NSArray *tileAdditionalBinaryFunctions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;

@end
