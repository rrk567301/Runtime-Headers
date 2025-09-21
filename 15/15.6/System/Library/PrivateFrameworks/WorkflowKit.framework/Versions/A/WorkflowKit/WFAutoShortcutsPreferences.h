@class NSString, NSSet, INAppDescriptor, NSData;

@interface WFAutoShortcutsPreferences : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) INAppDescriptor *appDescriptor;
@property (retain, nonatomic) NSString *appName;
@property (nonatomic) char isSiriEnabled;
@property (nonatomic) char isSpotlightEnabled;
@property (retain, nonatomic) NSSet *disabledAutoShortcuts;
@property (retain, nonatomic) NSData *cloudKitMetadata;
@property (nonatomic) long long lastSyncedHash;

+ (id)appDescriptorWithBundleIdentifier:(id)a0;
+ (int)crossPlatformHashForAppDescriptor:(id)a0;
+ (id)defaultSettingsForAppDescriptor:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)computedSyncHash;
- (id)initWithAppDescriptor:(id)a0 isSiriEnabled:(char)a1 isSpotlightEnabled:(char)a2 disabledAutoShortcuts:(id)a3 cloudKitMetadata:(id)a4;
- (id)initWithAppDescriptor:(id)a0 isSiriEnabled:(char)a1 isSpotlightEnabled:(char)a2 disabledAutoShortcuts:(id)a3 cloudKitMetadata:(id)a4 lastSyncedHash:(long long)a5;

@end
