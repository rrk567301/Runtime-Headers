@class LNAutoShortcutLocalizedPhrase, LNAutoShortcut, NSArray, NSString, NSNumber;

@interface WFAutoShortcutContextualAction : WFContextualAction

@property (readonly, nonatomic) WFAutoShortcutContextualAction *parentAction;
@property (readonly, nonatomic) unsigned long long orderOfShortcut;
@property (readonly, nonatomic) NSNumber *cachedProminentDisplayEligibility;
@property (readonly, nonatomic) LNAutoShortcut *autoShortcut;
@property (readonly, nonatomic) LNAutoShortcutLocalizedPhrase *phrase;
@property (readonly, copy, nonatomic) NSArray *alternativePhrases;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic, getter=isEligibleForProminentDisplay) BOOL eligibleForProminentDisplay;

+ (BOOL)supportsSecureCoding;
+ (id)spotlightDomainIdentifier;
+ (id)allActionsForAutoShortcut:(id)a0 bundleIdentifier:(id)a1;
+ (id)autoShortcutContextualActionsByQueryingEligibilityForProminentDisplay:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)creationDate;
- (unsigned long long)displayOrder;
- (id)initWithAutoShortcut:(id)a0 bundleIdentifier:(id)a1;
- (id)spotlightItem;
- (id)initWithAutoShortcut:(id)a0 phrase:(id)a1 alternativePhrases:(id)a2 bundleIdentifier:(id)a3;
- (id)initWithAutoShortcut:(id)a0 phrase:(id)a1 alternativePhrases:(id)a2 bundleIdentifier:(id)a3 orderOfShortcut:(unsigned long long)a4 parentAction:(id)a5 prominentDisplayEligibility:(id)a6;
- (BOOL)definesDisplayOrder;
- (id)relatedApp;
- (id)actionBySettingEligibilityForProminentDisplay:(BOOL)a0;
- (id)actionForRunningFromSpotlight;

@end
