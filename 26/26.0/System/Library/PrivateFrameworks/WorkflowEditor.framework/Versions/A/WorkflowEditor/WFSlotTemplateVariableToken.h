@class WFVariable;

@interface WFSlotTemplateVariableToken : WFSlotTemplateToken <WFVariableDelegate>

@property (retain, nonatomic) WFVariable *variable;

- (void)dealloc;
- (id)initWithVariable:(id)a0;
- (void).cxx_destruct;
- (void)variableDidChange:(id)a0;

@end
