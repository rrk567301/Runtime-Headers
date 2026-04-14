@class NSArray, PKShippingMethod, NSOrderedSet;

@interface PKShippingMethods : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_legacyShippingMethods;
    NSOrderedSet *_methodsSet;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *legacyShippingMethods;
@property (readonly, nonatomic) NSArray *methods;
@property (readonly, nonatomic) PKShippingMethod *defaultMethod;

+ (id)shippingMethodsWithProtobuf:(id)a0;

- (id)protobuf;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithLegacyShippingMethods:(id)a0;
- (id)initWithMethods:(id)a0 defaultMethod:(id)a1;
- (BOOL)isEqualToShippingMethods:(id)a0;

@end
