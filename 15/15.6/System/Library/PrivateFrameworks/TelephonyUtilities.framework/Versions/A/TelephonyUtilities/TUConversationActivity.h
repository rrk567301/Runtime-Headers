@class TUConversationActivityMetadata, NSString, NSUUID, NSData, TUHandle, NSDate, TUConversationActivityContext;

@interface TUConversationActivity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *activityIdentifier;
@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) TUConversationActivityMetadata *metadata;
@property (copy, nonatomic) NSData *applicationContext;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic, getter=isSupported) char supported;
@property (copy, nonatomic) TUHandle *originator;
@property (copy, nonatomic) TUHandle *trustedFromHandle;
@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSString *fallbackApplicationName;
@property (nonatomic, getter=isSystemActivity) char systemActivity;
@property (copy, nonatomic) NSString *staticIdentifier;
@property (nonatomic) char startWhenStaged;
@property (readonly, copy, nonatomic) NSString *representativeBundleIdentifier;
@property (readonly, copy, nonatomic) TUConversationActivityContext *activityContext;
@property (readonly, nonatomic, getter=isEligibleForHandoff) char eligibleForHandoff;
@property (readonly, nonatomic, getter=isEligibleForWebBrowser) char eligibleForWebBrowser;
@property (readonly, nonatomic, getter=isPlaceholderActivity) char placeholderActivity;

+ (id)lookupApplicationNameForBundleIdentifier:(id)a0;
+ (id)placeholderActivity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)localizedApplicationName;
- (char)isScreenSharingActivity;
- (id)concatenatedMetadataDescription;
- (id)concatenatedDescription;
- (id)initWithBundleIdentifier:(id)a0 metadata:(id)a1 applicationContext:(id)a2 uuid:(id)a3 activityIdentifier:(id)a4;
- (id)initWithBundleIdentifier:(id)a0 metadata:(id)a1 applicationContext:(id)a2 uuid:(id)a3 activityIdentifier:(id)a4 fallbackApplicationName:(id)a5;
- (id)initWithCreationRequest:(id)a0 bundleIdentifier:(id)a1 systemActivity:(char)a2;
- (id)initWithMetadata:(id)a0 applicationContext:(id)a1 uuid:(id)a2 activityIdentifier:(id)a3;
- (char)isEqualToConversationActivity:(id)a0;
- (char)isEquivalentToActivity:(id)a0;
- (char)isStaticActivity;
- (id)platformScreenSharingBundleIdentifier;
- (id)representativeDisplayName;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (void)setActivityContext:(id)a0;

@end
