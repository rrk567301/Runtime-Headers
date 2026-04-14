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
@property (nonatomic, readonly) BOOL hasDisappeared;
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
@property (nonatomic, readonly) long long hash;

+ (id)brandInfoForDisappearedWithURI:(id)a0;

- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)init;
- (id)initWithBrandURI:(id)a0 name:(id)a1 hasDisappeared:(BOOL)a2;
- (id)initWithBrandURI:(id)a0 name:(id)a1 hasDisappeared:(BOOL)a2 categories:(id)a3 primaryPhoneNumber:(id)a4 primaryBrandColorHexString:(id)a5 secondaryBrandColorHexString:(id)a6 isVerified:(BOOL)a7 localizedDescription:(id)a8 verifiedBy:(id)a9 website:(id)a10 messageNumber:(id)a11 emailAddress:(id)a12 address:(id)a13 termsAndConditionsURL:(id)a14 localizedResponseTime:(id)a15 genericCSSTemplateURL:(id)a16 brandLogoGuid:(id)a17;
- (id)relayDictionaryRepresentation;

@end
