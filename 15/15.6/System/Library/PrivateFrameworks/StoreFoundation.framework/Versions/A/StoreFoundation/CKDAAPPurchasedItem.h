@class NSDictionary;

@interface CKDAAPPurchasedItem : CKBook <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSDictionary *daapDictionary;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
