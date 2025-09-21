@class NSString;

@interface WFNFCTrigger : WFTrigger

@property (copy, nonatomic) NSString *tagIdentifier;
@property (copy, nonatomic) NSString *name;

+ (char)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (char)isUserInitiated;
+ (char)isAllowedToRunAutomatically;
+ (long long)triggerBacking;
+ (id)displayGlyphName;
+ (char)isSupportedOnThisDevice;
+ (id)localizedDisplayExplanation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)suggestedActions;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (char)hasValidConfiguration;

@end
