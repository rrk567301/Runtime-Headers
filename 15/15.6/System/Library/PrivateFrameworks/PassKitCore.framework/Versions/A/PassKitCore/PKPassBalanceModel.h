@class NSDictionary;

@interface PKPassBalanceModel : NSObject <NSSecureCoding> {
    NSDictionary *_balancesByID;
}

@property (class, readonly) char supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)balanceForIdentifier:(id)a0;
- (id)initWithBalances:(id)a0;

@end
