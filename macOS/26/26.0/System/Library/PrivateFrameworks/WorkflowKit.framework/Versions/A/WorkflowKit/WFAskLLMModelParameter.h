@interface WFAskLLMModelParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource> {
    void /* unknown type, empty encoding */ enablementHelper;
    void /* unknown type, empty encoding */ isPresentingOnboarding;
}

- (id)initWithDefinition:(id)a0;
- (void).cxx_destruct;
- (id)defaultSerializedRepresentationForEnumeration:(id)a0;
- (id)enumeration:(id)a0 accessoryIconForPossibleState:(id)a1;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (id)enumeration:(id)a0 localizedSubtitleLabelForPossibleState:(id)a1;
- (id)loadPossibleStatesForEnumeration:(id)a0;
- (id)localizedTitleForButtonWithState:(id)a0;

@end
