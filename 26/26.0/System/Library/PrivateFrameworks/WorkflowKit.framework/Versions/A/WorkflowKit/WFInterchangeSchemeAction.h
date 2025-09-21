@class NSString, WFInterchangeScheme;

@interface WFInterchangeSchemeAction : WFInterchangeActionDefinition

@property (readonly, nonatomic) NSString *formatString;
@property (readonly, weak, nonatomic) WFInterchangeScheme *scheme;
@property (readonly, nonatomic, getter=isCallbackAction) BOOL callbackAction;

- (void).cxx_destruct;
- (void)performActionWithInput:(id)a0 parameters:(id)a1 userInterface:(id)a2 successHandler:(id /* block */)a3 errorHandler:(id /* block */)a4;
- (id)defersCompletionUntilReturn;
- (id)formatKeys;
- (id)initWithDefinition:(id)a0 scheme:(id)a1;

@end
