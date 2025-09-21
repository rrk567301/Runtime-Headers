@interface VSOptional : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) id object;

+ (id)decodableClasses;
+ (id)optionalWithObject:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)conditionallyUnwrapObject:(id /* block */)a0;
- (void)conditionallyUnwrapObject:(id /* block */)a0 otherwise:(id /* block */)a1;
- (id)forceUnwrapObject;
- (id)unwrapWithFallback:(id)a0;

@end
