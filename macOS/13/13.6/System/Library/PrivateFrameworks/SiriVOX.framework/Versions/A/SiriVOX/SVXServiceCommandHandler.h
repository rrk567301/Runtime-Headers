@class NSString, SVXServiceCommandHandlerRegistry, SVXServiceCommandHandlerFallback, SVXServiceCommandDelayedActionStore, SVXModule, NSMutableSet;

@interface SVXServiceCommandHandler : NSObject <SVXModuleInstance> {
    SVXModule *_module;
    SVXServiceCommandHandlerRegistry *_handlerRegistry;
    SVXServiceCommandHandlerFallback *_fallbackHandler;
    SVXServiceCommandDelayedActionStore *_delayedActionStore;
    NSMutableSet *_transactions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reset;
- (void)_reset;
- (id)initWithModule:(id)a0;
- (void)stopWithModuleInstanceProvider:(id)a0;
- (void)_handleCommand:(id)a0 taskTracker:(id)a1 completion:(id /* block */)a2;
- (void)handleCommand:(id)a0 taskTracker:(id)a1 completion:(id /* block */)a2;
- (void)handleResult:(id)a0 forCommand:(id)a1 completion:(id /* block */)a2;
- (BOOL)isCommandUUFR:(id)a0;
- (void)startWithModuleInstanceProvider:(id)a0 platformDependencies:(id)a1;

@end
