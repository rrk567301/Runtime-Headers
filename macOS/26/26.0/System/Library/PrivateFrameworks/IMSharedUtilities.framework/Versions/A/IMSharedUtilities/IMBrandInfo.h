@class NSString, NSArray;

@interface IMBrandInfo : NSObject <IMAttributableContent> {
    void /* function */ brandURI;
    void /* function */ name;
    void /* function */ categories;
    void /* function */ primaryPhoneNumber;
    void /* function */ primaryBrandColorHexString;
    void /* function */ secondaryBrandColorHexString;
    void /* function */ localizedDescription;
    void /* function */ verifiedBy;
    void /* function */ website;
    void /* function */ messageNumber;
    void /* function */ emailAddress;
    void /* function */ address;
    void /* function */ termsAndConditionsURL;
    void /* function */ localizedResponseTime;
    void /* function */ genericCSSTemplateURL;
    void /* function */ brandLogoGuid;
}

@property (nonatomic, readonly) NSString *brandURI;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *categories;
@property (nonatomic, readonly) NSString *primaryPhoneNumber;
@property (nonatomic, readonly) NSString *primaryBrandColorHexString;
@property (nonatomic, readonly) NSString *secondaryBrandColorHexString;
@property (nonatomic, readonly) BOOL isVerified;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, readonly) NSString *verifiedBy;
@property (nonatomic, readonly) NSString *website;
@property (nonatomic, readonly) NSString *messageNumber;
@property (nonatomic, readonly) NSString *emailAddress;
@property (nonatomic, readonly) NSString *address;
@property (nonatomic, readonly) NSString *termsAndConditionsURL;
@property (nonatomic, readonly) NSString *localizedResponseTime;
@property (nonatomic, readonly) NSString *genericCSSTemplateURL;
@property (nonatomic, copy) NSString *brandLogoGuid;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBrandURI:(id)a0 name:(id)a1 categories:(id)a2 primaryPhoneNumber:(id)a3 primaryBrandColorHexString:(id)a4 secondaryBrandColorHexString:(id)a5 isVerified:(BOOL)a6 localizedDescription:(id)a7 verifiedBy:(id)a8 website:(id)a9 messageNumber:(id)a10 emailAddress:(id)a11 address:(id)a12 termsAndConditionsURL:(id)a13 localizedResponseTime:(id)a14 genericCSSTemplateURL:(id)a15 brandLogoGuid:(id)a16;
- (id)relayDictionaryRepresentation;

@end
