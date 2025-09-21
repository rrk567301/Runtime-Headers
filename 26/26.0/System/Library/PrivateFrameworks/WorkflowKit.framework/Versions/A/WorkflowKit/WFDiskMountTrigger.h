@class NSString, NSMutableDictionary, NSData, NSNumber;

@interface WFDiskMountTrigger : WFTrigger

@property (nonatomic) BOOL onConnect;
@property (nonatomic) BOOL onDisconnect;
@property (nonatomic) long long selection;
@property (copy, nonatomic) NSString *diskName;
@property (copy, nonatomic) NSString *volumeUUID;
@property (copy, nonatomic) NSMutableDictionary *mountPaths;
@property (copy, nonatomic) NSData *editingBookmarkData;
@property (retain, nonatomic) NSData *executionBookmarkData;
@property (retain, nonatomic) NSNumber *lastFiredOn;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isUserInitiated;
+ (id)tintColor;
+ (id)bsdEventInfoKey;
+ (id)diskAppearanceTimeInfoKey;
+ (id)diskNameEventInfoKey;
+ (id)diskVolumePathChangedEventInfoKey;
+ (id)executionBookmarkDataEventInfoKey;
+ (BOOL)isAllowedToRunAutomatically;
+ (id)localizedDisplayNameWithContext:(id)a0;
+ (long long)triggerBacking;
+ (id)triggerIDEventInfoKey;
+ (id)volumePathEventInfoKey;
+ (id)volumeUUIDEventInfoKey;
+ (id)onLabel;
+ (id)offIcon;
+ (id)displayGlyphName;
+ (BOOL)isSupportedOnThisDevice;
+ (id)localizedDisplayExplanation;
+ (id)offLabel;
+ (id)onIcon;
+ (Class)shortcutInputContentItemClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)suggestedActions;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
