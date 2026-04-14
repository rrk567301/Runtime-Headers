@class NSArray, NSString;

@interface WFEmailTrigger : WFTrigger

@property (retain, nonatomic) NSArray *selectedAccountIdentifiers;
@property (retain, nonatomic) NSArray *selectedAccountDescriptions;
@property (retain, nonatomic) NSString *selectedSubject;
@property (retain, nonatomic) NSArray *selectedRecipients;
@property (retain, nonatomic) NSArray *selectedSenders;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isAllowedToRunAutomatically;
+ (id)localizedDisplayNameWithContext:(id)a0;
+ (BOOL)requiresNotification;
+ (long long)triggerBacking;
+ (id)displayGlyph;
+ (id)displayGlyphName;
+ (id)displayGlyphTintColor;
+ (id)localizedDisplayExplanation;
+ (id)mailBlue;
+ (Class)shortcutInputContentItemClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedDescriptionWithConfigurationSummaryWithCount:(unsigned long long)a0;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
