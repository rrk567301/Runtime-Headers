@class NSString, NSArray, CHSIntentReference, NSDictionary, INCWidgetIntentProvider, NSMutableArray, CHSIntentRecommendationsContainer, INIntent, CHSExtensionIdentity;

@interface CHSWidgetDescriptor : CHSBaseDescriptor <CHSWidgetPersonality, NSMutableCopying, CHSWidgetIdentifiable, CHSConfigurableDescriptor, NSSecureCoding> {
    NSString *_kind;
    NSMutableArray *_fetchDefaultIntentCompletions;
    INCWidgetIntentProvider *_defaultIntentProvider;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long supportedSizeClasses;
@property (readonly, copy, nonatomic) INIntent *defaultIntent;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, nonatomic) NSString *kind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CHSIntentRecommendationsContainer *intentRecommendationsContainer;
@property (readonly, copy, nonatomic) NSDictionary *disfavoredLocations;
@property (readonly, nonatomic) char _didMigrateToRecommendationsContainer;
@property (readonly, nonatomic) unsigned long long supportedFamilies;
@property (readonly, nonatomic) NSArray *intentRecommendations;
@property (readonly, nonatomic) long long widgetVisibility;
@property (readonly, nonatomic, getter=isTransparent) char transparent;
@property (readonly, nonatomic) char supportsInteraction;
@property (readonly, nonatomic) char enablesMultipleTapTargets;
@property (readonly, nonatomic, getter=isBackgroundRemovable) char backgroundRemovable;
@property (readonly, nonatomic) char supportsAccentedContent;
@property (readonly, nonatomic) CHSExtensionIdentity *extensionIdentity;
@property (readonly, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSString *intentType;
@property (readonly, copy, nonatomic) CHSIntentReference *defaultIntentReference;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)matches:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (char)isInternal;
- (id)copyAsCHSAvocadoDescriptor;
- (id)initWithExtensionBundleIdentifier:(id)a0 containerBundleIdentifier:(id)a1 kind:(id)a2 supportedFamilies:(unsigned long long)a3 intentType:(id)a4;
- (char)matchesPersonality:(id)a0;
- (void)_evaluateSupportsAccentedContent;
- (id)_initWithDescriptor:(id)a0;
- (id)_intentDescription;
- (id)cachedDefaultIntent;
- (id)copyWithoutIntents;
- (unsigned long long)disfavoredFamiliesForLocation:(unsigned long long)a0;
- (char)hasIntents;
- (id)initFromDescriptor:(id)a0 includeIntents:(char)a1;
- (id)initWithExtensionBundleIdentifier:(id)a0 containerBundleIdentifier:(id)a1 kind:(id)a2 displayName:(id)a3 intentType:(id)a4 supportedSizeClasses:(unsigned long long)a5 widgetDescription:(id)a6 widgetVisibility:(long long)a7;
- (id)initWithExtensionBundleIdentifier:(id)a0 kind:(id)a1 supportedFamilies:(unsigned long long)a2 intentType:(id)a3;
- (id)initWithExtensionIdentity:(id)a0 kind:(id)a1 supportedFamilies:(unsigned long long)a2 intentType:(id)a3;
- (char)isTransparentForFamily:(long long)a0;
- (void)loadDefaultIntent:(id /* block */)a0;
- (unsigned long long)locationsDisfavoredByFamily:(long long)a0;
- (void)setDefaultIntent:(id)a0;
- (void)setDefaultIntentReference:(id)a0;
- (char)wantsMaterialBackgroundForFamily:(long long)a0;
- (id)widgetForFamily:(long long)a0 intent:(id)a1;

@end
