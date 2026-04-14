@class NSDictionary;

@interface WFConfiguredStaccatoIntentAction : WFConfiguredSystemIntentAction

@property (readonly, nonatomic) NSDictionary *templateParameterValues;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithIntent:(id)a0 named:(id)a1 previewIcon:(id)a2 appShortcutIdentifier:(id)a3 templateParameterValues:(id)a4 contextualParameters:(id)a5 shortcutsMetadata:(id)a6;
- (id)initWithIntent:(id)a0 named:(id)a1 previewIcon:(id)a2 appShortcutIdentifier:(id)a3 templateParameterValues:(id)a4 contextualParameters:(id)a5 shortcutsMetadata:(id)a6 colorScheme:(id)a7;

@end
