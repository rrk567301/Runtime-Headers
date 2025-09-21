@class NSArray;

@interface MTL4RenderPipelineBinaryFunctionsDescriptor : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *vertexAdditionalBinaryFunctions;
@property (copy, nonatomic) NSArray *fragmentAdditionalBinaryFunctions;
@property (copy, nonatomic) NSArray *tileAdditionalBinaryFunctions;
@property (copy, nonatomic) NSArray *objectAdditionalBinaryFunctions;
@property (copy, nonatomic) NSArray *meshAdditionalBinaryFunctions;

- (void)reset;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
