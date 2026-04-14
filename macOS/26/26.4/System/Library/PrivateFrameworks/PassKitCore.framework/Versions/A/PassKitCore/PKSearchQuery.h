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

- (BOOL)isEmpty;
- (id)tags;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
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
