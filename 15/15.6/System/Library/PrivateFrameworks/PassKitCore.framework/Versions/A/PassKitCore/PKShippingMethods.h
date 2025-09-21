@class NSArray, PKShippingMethod, NSOrderedSet;

@interface PKShippingMethods : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_legacyShippingMethods;
    NSOrderedSet *_methodsSet;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *legacyShippingMethods;
@property (readonly, nonatomic) NSArray *methods;
@property (readonly, nonatomic) PKShippingMethod *defaultMethod;

+ (id)shippingMethodsWithProtobuf:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)protobuf;
- (id)initWithLegacyShippingMethods:(id)a0;
- (id)initWithMethods:(id)a0 defaultMethod:(id)a1;
- (char)isEqualToShippingMethods:(id)a0;

@end
