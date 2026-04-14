@class NSArray;

@interface PKPaymentOfferDynamicContentCustomLayout : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *items;

- (id)initWithArray:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)arrayRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;

@end
