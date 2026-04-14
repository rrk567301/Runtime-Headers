@class NSString;

@interface WFIntentAppPickerParameter : WFDynamicEnumerationParameter

@property (readonly, nonatomic) NSString *intentName;

- (id)initWithDefinition:(id)a0;
- (void).cxx_destruct;
- (void)possibleStatesDidChange;
- (Class)singleStateClass;
- (BOOL)alwaysShowsButton;

@end
