@class NSArray, INIntentSlotDescription;

@interface WFSystemIntentEnumerationParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

@property (readonly, nonatomic) INIntentSlotDescription *slotDescription;

- (id)initWithDefinition:(id)a0;
- (id)possibleStates;
- (void).cxx_destruct;
- (id)localizedLabelForPossibleState:(id)a0;
- (Class)singleStateClass;
- (BOOL)alwaysShowsButton;

@end
