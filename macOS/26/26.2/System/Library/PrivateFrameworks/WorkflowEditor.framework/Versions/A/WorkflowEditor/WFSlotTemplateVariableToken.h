@class WFVariable;

@interface WFSlotTemplateVariableToken : WFSlotTemplateToken <WFVariableDelegate>

@property (retain, nonatomic) WFVariable *variable;

- (void).cxx_destruct;
- (id)initWithVariable:(id)a0;
- (void)dealloc;
- (void)variableDidChange:(id)a0;

@end
