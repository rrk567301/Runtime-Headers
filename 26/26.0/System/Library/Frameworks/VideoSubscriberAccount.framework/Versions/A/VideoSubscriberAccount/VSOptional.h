@interface VSOptional : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id object;

+ (id)decodableClasses;
+ (id)optionalWithObject:(id)a0;

- (void)conditionallyUnwrapObject:(id /* block */)a0;
- (id)initWithObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)conditionallyUnwrapObject:(id /* block */)a0 otherwise:(id /* block */)a1;
- (unsigned long long)hash;
- (id)forceUnwrapObject;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)unwrapWithFallback:(id)a0;

@end
