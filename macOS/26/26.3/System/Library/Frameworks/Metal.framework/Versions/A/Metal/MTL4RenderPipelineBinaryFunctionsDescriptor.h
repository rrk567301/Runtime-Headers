@class NSArray;

@interface MTL4RenderPipelineBinaryFunctionsDescriptor : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *vertexAdditionalBinaryFunctions;
@property (copy, nonatomic) NSArray *fragmentAdditionalBinaryFunctions;
@property (copy, nonatomic) NSArray *tileAdditionalBinaryFunctions;
@property (copy, nonatomic) NSArray *objectAdditionalBinaryFunctions;
@property (copy, nonatomic) NSArray *meshAdditionalBinaryFunctions;

- (id)init;
- (void)dealloc;
- (void)reset;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
