@class WFVariable;

@interface WFSlotTemplateVariableToken : WFSlotTemplateToken <WFVariableDelegate>

@property (retain, nonatomic) WFVariable *variable;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithVariable:(id)a0;
- (void)variableDidChange:(id)a0;

@end
