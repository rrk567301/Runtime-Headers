@class WFVariable;

@interface WFSlotTemplateVariableToken : WFSlotTemplateToken <WFVariableDelegate>

@property (retain, nonatomic) WFVariable *variable;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithVariable:(id)a0;
- (void)variableDidChange:(id)a0;

@end
