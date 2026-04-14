@class NSDictionary;

@interface PKPassBalanceModel : NSObject <NSSecureCoding> {
    NSDictionary *_balancesByID;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)balanceForIdentifier:(id)a0;
- (id)initWithBalances:(id)a0;

@end
