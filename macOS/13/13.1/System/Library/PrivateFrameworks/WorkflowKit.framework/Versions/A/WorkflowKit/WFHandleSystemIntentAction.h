@class NSSet, NSString, INIntentDescription, NSArray, INIntentDescriptor;

@interface WFHandleSystemIntentAction : WFHandleIntentAction <WFDynamicEnumerationDataSource> {
    INIntentDescription *_intentDescription;
    NSArray *_supportedAppIdentifiers;
}

@property (readonly, nonatomic) int token;
@property (readonly, nonatomic) NSSet *supportedIdentifiers;
@property (readonly, nonatomic) NSSet *launchableIdentifiers;
@property (retain, nonatomic) INIntentDescriptor *intentDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedEnumerator;

- (void)dealloc;
- (void).cxx_destruct;
- (id)icon;
- (id)localizedAppName;
- (long long)intentCategory;
- (id)intentDescription;
- (id)intentClassName;
- (id)slots;
- (id)accessoryIcon;
- (id)supportedAppIdentifiers;
- (void)initializeParameters;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (id)enumeration:(id)a0 accessoryImageForPossibleState:(id)a1;
- (id)possibleStatesForEnumeration:(id)a0;
- (id)generatedIntentWithIdentifier:(id)a0 input:(id)a1 processedParameters:(id)a2 error:(id *)a3;
- (id)actionForAppIdentifier:(id)a0;
- (id)customAppNameForBundleIdentifier:(id)a0;
- (id)customImageForBundleIdentifier:(id)a0;
- (id)intentDescriptorFromParameterState;
- (id)intentDescriptorWithIntentClassName:(id)a0 launchableBundleId:(id)a1;
- (void)selectedAppDidChange;
- (id)appSection;
- (BOOL)shouldBeIncludedInAppsList;
- (id)copyWithSerializedParameters:(id)a0;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2 stringLocalizer:(id)a3;
- (id)displayableAppIdentifier;
- (id)launchableAppIdentifier;
- (id)selectedAppNotSupportedError;
- (id)launchableAppIdentifiers;

@end
