@class NSArray;

@interface WFWalletTransactionTrigger : WFTrigger

@property (retain, nonatomic) NSArray *selectedPassUniqueIDs;
@property (retain, nonatomic) NSArray *selectedMerchantTypes;
@property (retain, nonatomic) NSArray *selectedMerchants;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isUserInitiated;
+ (BOOL)isAllowedToRunAutomatically;
+ (id)localizedDisplayNameWithContext:(id)a0;
+ (long long)triggerBacking;
+ (id)displayGlyph;
+ (BOOL)isSupportedOnThisDevice;
+ (id)localizedDisplayExplanation;
+ (Class)shortcutInputContentItemClass;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)suggestedActions;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
