@class NSString, NSURL, NSData;

@interface APAskToAgeRestrictionMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *appBundleID;
@property unsigned long long appItemID;
@property unsigned long long appVersionID;
@property (retain) NSString *appName;
@property (retain) NSURL *requestedAppIconURL;
@property (retain) NSString *distributorID;
@property (retain) NSString *distributorName;
@property (retain) NSString *developerID;
@property (retain) NSString *developerName;
@property (retain) NSURL *developerSupportURL;
@property BOOL isWebApp;
@property BOOL isDistributor;
@property (retain) NSString *askerName;
@property (retain) NSString *ageRatingString;
@property (retain) NSString *distributorType;
@property (retain) NSString *distributorBundleID;
@property (retain) NSString *distributorDomain;
@property (retain) NSURL *distributorIconURL;
@property (retain) NSString *installTypeRawValue;
@property (retain) NSString *accountID;
@property (retain) NSURL *url;
@property (retain) NSString *oAuthToken;
@property (retain) NSString *installVerificationToken;
@property (retain) NSString *clientID;
@property (retain) NSData *authenticationContextData;
@property BOOL userInitiatedOverride;
@property BOOL allowAccountPrompt;
@property unsigned long long originallyRequestedVersionID;
@property unsigned long long itemIDFromButtonConfiguration;
@property (retain) NSURL *referrer;
@property (retain) NSURL *appShareURL;

- (id)compile;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
