@class NSString, NSArray, NSURL, NSDictionary;

@interface OSSystemExtensionInfo : NSObject <NSSecureCoding, OSSystemExtensionPolicyItem> {
    BOOL _enabled;
    NSDictionary *_localizedInfo;
    NSDictionary *_unlocalizedInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *identifier;
@property (retain) NSString *developerName;
@property (retain) NSArray *categoryIdentifiers;
@property (retain) NSString *owningCategoryIdentifier;
@property (retain) NSString *teamID;
@property BOOL teamIDPlatformBinary;
@property BOOL teamIDNone;
@property (retain) NSString *bundleVersion;
@property (retain) NSString *shortVersionString;
@property (retain) NSURL *containingAppURL;
@property (retain) NSURL *stagedBundleURL;
@property (retain) NSString *stagedCdhash;
@property (retain) NSArray *stagedCdhashes;
@property BOOL active;
@property BOOL rebootRequired;
@property BOOL modified;
@property (retain) NSString *stateString;
@property (retain) NSDictionary *additionalLaunchdPlistEntries;
@property (readonly) NSString *applicationName;
@property (readonly) NSString *usageDescription;
@property BOOL enabled;
@property (readonly) NSString *extensionDisplayName;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)getLocalizedStringForKey:(id)a0;

@end
