@class INShortcut;

@interface WFINShortcutContextualAction : WFContextualAction

@property (readonly, copy, nonatomic) INShortcut *shortcut;

+ (BOOL)supportsSecureCoding;

- (id)uniqueIdentifier;
- (id)icon;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)_staticDisplayStringForDecoding;
- (id)workflowRunKind;
- (id)initWithINShortcut:(id)a0;
- (id)runDescriptorForSurface:(unsigned long long)a0;
- (id)runRequestForSurface:(unsigned long long)a0;

@end
