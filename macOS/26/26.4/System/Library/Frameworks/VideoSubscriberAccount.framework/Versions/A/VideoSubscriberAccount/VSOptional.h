@interface VSOptional : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id object;

+ (id)optionalWithObject:(id)a0;
+ (id)decodableClasses;

- (id)initWithObject:(id)a0;
- (id)forceUnwrapObject;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)unwrapWithFallback:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (void)conditionallyUnwrapObject:(id /* block */)a0;
- (id)description;
- (void)conditionallyUnwrapObject:(id /* block */)a0 otherwise:(id /* block */)a1;
- (id)initWithCoder:(id)a0;

@end
