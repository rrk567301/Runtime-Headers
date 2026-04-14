@interface VSOptional : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id object;

+ (id)decodableClasses;
+ (id)optionalWithObject:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)forceUnwrapObject;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)conditionallyUnwrapObject:(id /* block */)a0 otherwise:(id /* block */)a1;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (void)conditionallyUnwrapObject:(id /* block */)a0;
- (id)description;
- (id)unwrapWithFallback:(id)a0;
- (id)init;

@end
