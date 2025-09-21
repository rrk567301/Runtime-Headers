@class NSMapTable;

@interface ABActionDispatcher : NSResponder {
    NSMapTable *_actionsBySelector;
}

+ (void)initialize;
+ (id)actionNameFromFactoryName:(id)a0;
+ (void)addActionMethods;
+ (id)selectorPointerFunctions;

- (BOOL)validateMenuItem:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)registerActions;
- (void)_internalActionHandler:(id)a0;
- (id)actionForSelector:(SEL)a0;
- (void)registerActionForMethod:(id)a0;
- (void)setAction:(id)a0 forSelector:(SEL)a1;
- (void)willRegisterActions;

@end
