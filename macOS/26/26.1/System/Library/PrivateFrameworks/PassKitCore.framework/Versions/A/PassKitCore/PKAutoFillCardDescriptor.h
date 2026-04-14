@class NSString, PKImage, NSDate;

@interface PKAutoFillCardDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *cardNickname;
@property (copy, nonatomic) NSString *displayableLastFour;
@property (nonatomic) unsigned long long credentialType;
@property (retain, nonatomic) PKImage *underlyingCardArt;
@property (nonatomic) BOOL requiresAuthorization;
@property (retain, nonatomic) NSDate *lastUsage;
@property (retain, nonatomic) NSString *displayableShortDescription;
@property (retain, nonatomic) NSString *primaryAccountIdentifier;
@property (retain, nonatomic) NSString *passUniqueIdentifier;
@property (nonatomic) BOOL cardIsInWallet;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) struct CGImage { } *cardArt;
@property (readonly, nonatomic) struct CGImage { } *artwork;

- (id)_initWithType:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)isEqualToAutofillCardDescriptor:(id)a0;
- (id)urlToCardDetails;

@end
