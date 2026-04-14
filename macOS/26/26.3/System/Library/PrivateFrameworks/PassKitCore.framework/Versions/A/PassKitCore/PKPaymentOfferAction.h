@class NSString, NSURL, PKPaymentOfferDynamicContent;

@interface PKPaymentOfferAction : NSObject <NSCopying, NSSecureCoding> {
    NSURL *_actionURL;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSURL *actionURL;
@property (readonly, nonatomic) BOOL useAuthenticationSession;
@property (readonly, nonatomic) PKPaymentOfferDynamicContent *dynamicContent;
@property (readonly, copy, nonatomic) NSString *challenge;
@property (readonly, copy, nonatomic) NSString *verifier;

- (id)dictionaryRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)populateChallenge:(id)a0 verifier:(id)a1;

@end
