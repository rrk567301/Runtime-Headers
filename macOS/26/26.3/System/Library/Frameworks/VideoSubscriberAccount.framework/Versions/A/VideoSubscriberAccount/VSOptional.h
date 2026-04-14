@interface VSOptional : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id object;

+ (id)optionalWithObject:(id)a0;
+ (id)decodableClasses;

- (id)initWithObject:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)unwrapWithFallback:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)forceUnwrapObject;
- (void)conditionallyUnwrapObject:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (void)conditionallyUnwrapObject:(id /* block */)a0 otherwise:(id /* block */)a1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
