@class NSMapTable;

@interface ABActionDispatcher : NSResponder {
    NSMapTable *_actionsBySelector;
}

+ (void)initialize;
+ (void)addActionMethods;
+ (id)actionNameFromFactoryName:(id)a0;
+ (id)selectorPointerFunctions;

- (id)init;
- (void).cxx_destruct;
- (BOOL)validateMenuItem:(id)a0;
- (void)_internalActionHandler:(id)a0;
- (id)actionForSelector:(SEL)a0;
- (void)willRegisterActions;
- (void)registerActionForMethod:(id)a0;
- (void)setAction:(id)a0 forSelector:(SEL)a1;
- (void)registerActions;

@end
