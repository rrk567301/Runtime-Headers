@class NSArray;

@interface PKPeerPaymentDynamicFraudPageBodyBulletedListLine : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *contents;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithArray:(id)a0;
- (id)initWithCoder:(id)a0;

@end
