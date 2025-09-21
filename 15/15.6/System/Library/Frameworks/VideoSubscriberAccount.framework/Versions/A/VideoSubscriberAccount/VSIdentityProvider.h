@class VSOptional, NSString, NSArray, NSURL, NSNumber;

@interface VSIdentityProvider : NSObject <NSCopying, NSSecureCoding> {
    NSString *_displayName;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) VSOptional *uniqueID;
@property (retain, nonatomic) VSOptional *providerID;
@property (retain, nonatomic) VSOptional *providerInfo;
@property (copy, nonatomic) NSString *nameForSorting;
@property (copy, nonatomic) NSNumber *rankForSorting;
@property (readonly, nonatomic) VSOptional *displayName;
@property (copy, nonatomic) NSArray *supportedTemplates;
@property (copy, nonatomic) NSArray *supportedAuthenticationSchemes;
@property (nonatomic) char requireAuthenticationURLSystemTrust;
@property (nonatomic) char requireXHRRequestSystemTrust;
@property (nonatomic, getter=isProhibitedByStore) char prohibitedByStore;
@property (nonatomic, getter=isDeveloper) char developer;
@property (nonatomic, getter=isApplication) char application;
@property (copy, nonatomic) NSURL *authenticationURL;
@property (copy, nonatomic) NSURL *appStoreRoomURL;
@property (copy, nonatomic) NSArray *appAdamIDs;
@property (copy, nonatomic) NSString *defaultAppId;
@property (copy, nonatomic) NSString *providerArtworkTemplateURL;
@property (nonatomic) char isSetTopBoxSupported;
@property (nonatomic) char shouldShowChannelApps;
@property (nonatomic) char shouldShowSubscriptionApps;
@property (nonatomic) char isSTBOptOutAllowed;
@property (copy, nonatomic) NSString *providerAppArtworkTemplateURL;
@property (copy, nonatomic) NSNumber *appPlacementPosition;
@property (copy, nonatomic) NSString *userToken;
@property (copy, nonatomic) NSArray *allPersonalizedAppDescriptions;
@property (copy, nonatomic) NSArray *nonChannelAppDescriptions;
@property (copy, nonatomic) NSArray *storefronts;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithApplicationProvider:(id)a0;
- (char)isFullySupportedForRequestsExpectingAuthenticationSchemes:(id)a0;
- (char)supportsRequestsExpectingAuthenticationSchemes:(id)a0;

@end
