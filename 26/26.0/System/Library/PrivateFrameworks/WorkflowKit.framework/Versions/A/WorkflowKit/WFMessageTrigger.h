@class NSString, NSArray;

@interface WFMessageTrigger : WFTrigger

@property (retain, nonatomic) NSString *selectedContents;
@property (retain, nonatomic) NSArray *selectedSenders;
@property (retain, nonatomic) NSArray *selectedSendersStrings;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isAllowedToRunAutomatically;
+ (id)localizedDisplayNameWithContext:(id)a0;
+ (BOOL)requiresNotification;
+ (long long)triggerBacking;
+ (id)displayGlyph;
+ (id)displayGlyphName;
+ (id)displayGlyphTintColor;
+ (id)localizedDisplayExplanation;
+ (id)messagesGreen;
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
