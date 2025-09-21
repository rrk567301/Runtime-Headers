@class CHSWidgetMetrics, NSString, CHSWidget, NSArray, CHSExtensionIdentity, CHSConfiguredWidgetContainerDescriptor, CHSWidgetDisplayProperties;
@protocol CHSWidgetRefreshStrategy;

@interface CHSConfiguredWidgetDescriptor : NSObject <BSDescriptionProviding, CHSWidgetConfigurationReference, NSCopying, NSMutableCopying, NSSecureCoding, CHSWidgetIdentifiable> {
    CHSConfiguredWidgetContainerDescriptor *_weak_container;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, weak, nonatomic) CHSConfiguredWidgetContainerDescriptor *container;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) CHSWidget *widget;
@property (readonly, copy, nonatomic) CHSWidgetMetrics *metrics;
@property (readonly, nonatomic, getter=isSuggestion) char suggestion;
@property (readonly, nonatomic, getter=isSystemConfigured) char systemConfigured;
@property (readonly, nonatomic) unsigned long long supportedColorSchemes;
@property (readonly, copy, nonatomic) NSArray *supportedRenderSchemes;
@property (readonly, nonatomic) char supportsLowLuminance;
@property (readonly, nonatomic) char showsWidgetLabel;
@property (readonly, copy, nonatomic) CHSWidgetDisplayProperties *displayProperties;
@property (readonly, nonatomic) id<CHSWidgetRefreshStrategy> refreshStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CHSExtensionIdentity *extensionIdentity;
@property (readonly, nonatomic) NSString *kind;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)_setContainer:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)matches:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)extensionBundleIdentifier;
- (char)matchesPersonality:(id)a0;
- (char)supportsTinting;
- (id)_initWithDescriptor:(id)a0;
- (id)_initWithUniqueIdentifier:(id)a0 widget:(id)a1 metrics:(id)a2 displayProperties:(id)a3 fallbackToDefaultDisplayIfNecessary:(char)a4;
- (id)initWithUniqueIdentifier:(id)a0 widget:(id)a1 metrics:(id)a2;
- (id)initWithUniqueIdentifier:(id)a0 widget:(id)a1 metrics:(id)a2 isSuggestion:(char)a3 isSystemConfigured:(char)a4;
- (char)showsComplicationLabel;
- (unsigned long long)supportedRenderingModes;

@end
