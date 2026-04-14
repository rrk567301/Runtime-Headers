@class NSArray;

@interface PKPaymentOfferDynamicContentCustomLayout : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *items;

- (id)initWithArray:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)arrayRepresentation;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
