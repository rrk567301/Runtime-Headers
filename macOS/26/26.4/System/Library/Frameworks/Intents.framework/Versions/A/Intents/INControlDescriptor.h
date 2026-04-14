@class NSString;

@interface INControlDescriptor : INConfigurableDescriptor

@property (readonly, copy, nonatomic) NSString *actionIntentType;

- (void).cxx_destruct;
- (id)description;
- (id)initWithExtensionBundleIdentifier:(id)a0 kind:(id)a1 intentClassName:(id)a2 actionIntentType:(id)a3;

@end
