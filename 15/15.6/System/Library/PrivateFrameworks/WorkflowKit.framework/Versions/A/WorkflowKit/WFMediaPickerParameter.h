@class WFAction;

@interface WFMediaPickerParameter : WFParameter

@property (weak, nonatomic) WFAction *action;

- (void).cxx_destruct;
- (char)parameterStateIsValid:(id)a0;
- (Class)singleStateClass;
- (id)localizedLabelForState:(id)a0;

@end
