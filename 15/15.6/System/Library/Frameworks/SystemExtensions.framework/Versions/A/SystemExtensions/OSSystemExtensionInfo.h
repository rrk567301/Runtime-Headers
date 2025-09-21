@class NSString, NSArray, NSURL, NSDictionary;

@interface OSSystemExtensionInfo : NSObject <NSSecureCoding, OSSystemExtensionPolicyItem> {
    char _enabled;
    NSDictionary *_localizedInfo;
    NSDictionary *_unlocalizedInfo;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSString *identifier;
@property (retain) NSString *developerName;
@property (retain) NSArray *categoryIdentifiers;
@property (retain) NSString *owningCategoryIdentifier;
@property (retain) NSString *teamID;
@property char teamIDPlatformBinary;
@property char teamIDNone;
@property (copy) NSString *bundleVersion;
@property (retain) NSString *shortVersionString;
@property (retain) NSURL *containingAppURL;
@property (retain) NSURL *stagedBundleURL;
@property (retain) NSString *stagedCdhash;
@property (retain) NSArray *stagedCdhashes;
@property char active;
@property char rebootRequired;
@property char modified;
@property (retain) NSString *stateString;
@property (retain) NSDictionary *additionalLaunchdPlistEntries;
@property char removable;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *bundleShortVersion;
@property (readonly) NSString *extensionDisplayName;
@property (readonly) NSString *applicationName;
@property (readonly) NSString *usageDescription;
@property char enabled;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)getLocalizedStringForKey:(id)a0;

@end
