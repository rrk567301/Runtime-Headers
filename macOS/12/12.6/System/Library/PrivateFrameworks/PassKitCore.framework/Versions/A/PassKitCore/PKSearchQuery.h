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

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)tags;
- (id)initWithIdentifier:(id)a0 keyboardLanguage:(id)a1;
- (id)_groupTokenOfType:(unsigned long long)a0;
- (id)categoryToken;
- (id)merchantToken;
- (id)peerPaymentToken;
- (id)accountUserToken;
- (id)locationTokens;
- (id)amountToken;
- (id)dateToken;
- (id)transactionTypes;
- (id)transactionStatuses;
- (id)transactionSources;
- (id)peerPaymentSubTypeToken;
- (id)rewardsToken;

@end
