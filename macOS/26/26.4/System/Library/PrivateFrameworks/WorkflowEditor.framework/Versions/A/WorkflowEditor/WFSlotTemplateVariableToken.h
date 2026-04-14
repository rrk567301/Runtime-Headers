@class WFVariable;

@interface WFSlotTemplateVariableToken : WFSlotTemplateToken <WFVariableDelegate>

@property (retain, nonatomic) WFVariable *variable;

- (id)initWithVariable:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)variableDidChange:(id)a0;

@end
