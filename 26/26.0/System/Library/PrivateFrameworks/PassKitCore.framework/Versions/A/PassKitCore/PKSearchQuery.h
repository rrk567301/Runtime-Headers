@class NSString, NSArray;

@interface PKSearchQuery : NSObject <NSSecureCoding> {
    unsigned long long _domain;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *keyboardLanguage;
@property (readonly, nonatomic) unsigned long long domain;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *tokens;

- (id)tags;
- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)objectTypeToken;
- (id)_groupTokenOfType:(unsigned long long)a0;
- (id)accountUserToken;
- (id)amountTokens;
- (id)categoryToken;
- (id)dateToken;
- (id)displayNameToken;
- (id)initWithIdentifier:(id)a0 keyboardLanguage:(id)a1;
- (id)locationTokens;
- (id)peerPaymentSubTypeToken;
- (id)peerPaymentToken;
- (id)rewardsToken;
- (id)transactionSources;
- (id)transactionStatuses;
- (id)transactionTypes;

@end
