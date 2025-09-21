@class NSArray;

@interface WFWalletTransactionTrigger : WFTrigger

@property (retain, nonatomic) NSArray *selectedPassUniqueIDs;
@property (retain, nonatomic) NSArray *selectedMerchantTypes;
@property (retain, nonatomic) NSArray *selectedMerchants;

+ (char)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (char)isUserInitiated;
+ (char)isAllowedToRunAutomatically;
+ (long long)triggerBacking;
+ (id)displayGlyph;
+ (char)isSupportedOnThisDevice;
+ (id)localizedDisplayExplanation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)suggestedActions;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (char)hasValidConfiguration;
- (Class)shortcutInputContentItemClass;

@end
