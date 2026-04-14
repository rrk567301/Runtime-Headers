@class NSString, NSSet, INAppDescriptor, NSData;

@interface WFAutoShortcutsPreferences : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) INAppDescriptor *appDescriptor;
@property (retain, nonatomic) NSString *appName;
@property (nonatomic) BOOL isSiriEnabled;
@property (nonatomic) BOOL isSpotlightEnabled;
@property (retain, nonatomic) NSSet *disabledAutoShortcuts;
@property (retain, nonatomic) NSData *cloudKitMetadata;
@property (nonatomic) long long lastSyncedHash;

+ (id)defaultSettingsForAppDescriptor:(id)a0;
+ (id)appDescriptorWithBundleIdentifier:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAppDescriptor:(id)a0 appName:(id)a1 isSiriEnabled:(BOOL)a2 isSpotlightEnabled:(BOOL)a3 disabledAutoShortcuts:(id)a4 cloudKitMetadata:(id)a5;
- (long long)computedSyncHash;
- (id)initWithAppDescriptor:(id)a0 appName:(id)a1 isSiriEnabled:(BOOL)a2 isSpotlightEnabled:(BOOL)a3 disabledAutoShortcuts:(id)a4 cloudKitMetadata:(id)a5 lastSyncedHash:(long long)a6;

@end
