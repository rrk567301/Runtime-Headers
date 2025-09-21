@class NSString, NSURL, PKPaymentOfferDynamicContent;

@interface PKPaymentOfferAction : NSObject <NSCopying, NSSecureCoding> {
    NSURL *_actionURL;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSURL *actionURL;
@property (readonly, nonatomic) char useAuthenticationSession;
@property (readonly, nonatomic) PKPaymentOfferDynamicContent *dynamicContent;
@property (readonly, copy, nonatomic) NSString *challenge;
@property (readonly, copy, nonatomic) NSString *verifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)populateChallenge:(id)a0 verifier:(id)a1;

@end
