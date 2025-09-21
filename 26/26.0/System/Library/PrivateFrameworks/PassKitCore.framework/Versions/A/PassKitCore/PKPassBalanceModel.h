@class NSDictionary;

@interface PKPassBalanceModel : NSObject <NSSecureCoding> {
    NSDictionary *_balancesByID;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)balanceForIdentifier:(id)a0;
- (id)initWithBalances:(id)a0;

@end
