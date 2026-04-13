@protocol AMVariableControllerProtocol;

@interface _AMVariableActionTarget : NSObject

@property (weak, nonatomic) id<AMVariableControllerProtocol> variableController;

- (void).cxx_destruct;
- (id)initWithVariableController:(id)a0;
- (void)editVariable:(id)a0;

@end
