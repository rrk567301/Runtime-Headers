@class NSArray, NSDictionary, NSString;

@interface PXGShaderFunction : NSObject <NSCopying>

@property (class, readonly, nonatomic) NSArray *shaderFunctions;
@property (class, readonly, nonatomic) NSDictionary *shaderFunctionByName;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *assignmentVariable;
@property (readonly, nonatomic) char isOpaque;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 assignmentVariable:(id)a1 isOpaque:(char)a2;

@end
