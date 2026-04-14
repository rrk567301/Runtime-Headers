@class NSDictionary;

@interface CKDAAPPurchasedItem : CKBook <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSDictionary *daapDictionary;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
