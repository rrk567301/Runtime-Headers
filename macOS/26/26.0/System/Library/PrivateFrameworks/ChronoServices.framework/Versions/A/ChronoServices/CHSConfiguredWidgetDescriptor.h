@class NSString, NSArray, CHSConfiguredWidgetContainerDescriptor, CHSWidget, CHSWidgetDisplayProperties, NSDateComponents, CHSWidgetMetrics, CHSExtensionIdentity;
@protocol CHSWidgetRefreshStrategy;

@interface CHSConfiguredWidgetDescriptor : NSObject <BSDescriptionProviding, CHSWidgetConfigurationReference, NSCopying, NSMutableCopying, NSSecureCoding, CHSWidgetIdentifiable> {
    CHSConfiguredWidgetContainerDescriptor *_weak_container;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, weak, nonatomic) CHSConfiguredWidgetContainerDescriptor *container;
@property (readonly, nonatomic) NSDateComponents *idealizedDateComponents;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) CHSWidget *widget;
@property (readonly, copy, nonatomic) CHSWidgetMetrics *metrics;
@property (readonly, nonatomic, getter=isSuggestion) BOOL suggestion;
@property (readonly, nonatomic, getter=isSystemConfigured) BOOL systemConfigured;
@property (readonly, nonatomic) unsigned long long supportedColorSchemes;
@property (readonly, copy, nonatomic) NSArray *supportedRenderSchemes;
@property (readonly, nonatomic) BOOL supportsLowLuminance;
@property (readonly, nonatomic) BOOL showsWidgetLabel;
@property (readonly, copy, nonatomic) CHSWidgetDisplayProperties *displayProperties;
@property (readonly, nonatomic) id<CHSWidgetRefreshStrategy> refreshStrategy;
@property (readonly, nonatomic) unsigned long long supportedProximities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CHSExtensionIdentity *extensionIdentity;
@property (readonly, nonatomic) NSString *kind;

+ (id)new;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)extensionBundleIdentifier;
- (id)_initWithDescriptor:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithUniqueIdentifier:(id)a0 widget:(id)a1 metrics:(id)a2 displayProperties:(id)a3 fallbackToDefaultDisplayIfNecessary:(BOOL)a4;
- (unsigned long long)supportedRenderingModes;
- (id)init;
- (void)_setContainer:(id)a0;
- (id)succinctDescription;
- (BOOL)showsComplicationLabel;
- (BOOL)matchesPersonality:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithUniqueIdentifier:(id)a0 widget:(id)a1 metrics:(id)a2;
- (id)initWithCoder:(id)a0;
- (BOOL)matches:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithUniqueIdentifier:(id)a0 widget:(id)a1 metrics:(id)a2 isSuggestion:(BOOL)a3 isSystemConfigured:(BOOL)a4;

@end
