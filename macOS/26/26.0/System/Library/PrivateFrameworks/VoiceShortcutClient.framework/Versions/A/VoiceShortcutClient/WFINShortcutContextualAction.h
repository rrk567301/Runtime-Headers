@class INShortcut;

@interface WFINShortcutContextualAction : WFContextualAction

@property (readonly, copy, nonatomic) INShortcut *shortcut;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)icon;
- (id)uniqueIdentifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)workflowRunKind;
- (id)_staticDisplayStringForDecoding;
- (id)initWithINShortcut:(id)a0;
- (id)runDescriptorForSurface:(unsigned long long)a0;
- (id)runRequestForSurface:(unsigned long long)a0;

@end
