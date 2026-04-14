@class NSArray, NSDictionary, NSString;

@interface PXGShaderFunction : NSObject <NSCopying>

@property (class, readonly, nonatomic) NSArray *shaderFunctions;
@property (class, readonly, nonatomic) NSDictionary *shaderFunctionByName;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *assignmentVariable;
@property (readonly, nonatomic) BOOL isOpaque;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithName:(id)a0 assignmentVariable:(id)a1 isOpaque:(BOOL)a2;

@end
