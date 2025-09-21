@class NSString, NSArray;

@interface WFMessageTrigger : WFTrigger

@property (retain, nonatomic) NSString *selectedContents;
@property (retain, nonatomic) NSArray *selectedSenders;
@property (retain, nonatomic) NSArray *selectedSendersStrings;

+ (char)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (char)isAllowedToRunAutomatically;
+ (char)requiresNotification;
+ (long long)triggerBacking;
+ (id)displayGlyph;
+ (id)displayGlyphTintColor;
+ (id)localizedDisplayExplanation;
+ (id)messagesGreen;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedDescriptionWithConfigurationSummaryWithCount:(unsigned long long)a0;
- (id)localizedPastTenseDescription;
- (char)hasValidConfiguration;
- (Class)shortcutInputContentItemClass;

@end
