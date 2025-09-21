@class NSArray;

@interface MTLRenderPipelineFunctionsDescriptor : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *objectAdditionalBinaryFunctions;
@property (copy, nonatomic) NSArray *meshAdditionalBinaryFunctions;
@property (nonatomic) unsigned long long *vertexAdditionalBinaryFunctionResourceIndices;
@property (nonatomic) unsigned long long *fragmentAdditionalBinaryFunctionResourceIndices;
@property (nonatomic) unsigned long long *tileAdditionalBinaryFunctionResourceIndices;
@property (nonatomic) unsigned long long *objectAdditionalBinaryFunctionResourceIndices;
@property (nonatomic) unsigned long long *meshAdditionalBinaryFunctionResourceIndices;
@property (copy, nonatomic) NSArray *vertexAdditionalBinaryFunctions;
@property (copy, nonatomic) NSArray *fragmentAdditionalBinaryFunctions;
@property (copy, nonatomic) NSArray *tileAdditionalBinaryFunctions;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
