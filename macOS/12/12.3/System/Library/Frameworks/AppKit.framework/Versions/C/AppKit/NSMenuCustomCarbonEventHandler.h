@class NSCarbonMenuImpl;

@interface NSMenuCustomCarbonEventHandler : NSObject {
    struct OpaqueEventHandlerRef { } *eventHandlerRef;
    int specCount;
    void *eventSpecs;
    id /* block */ handlerBlock;
    NSMenuCustomCarbonEventHandler *nextHandler;
    NSCarbonMenuImpl *menuImpl;
    id /* block */ blockGetter;
}

- (void)dealloc;
- (void)installAllIntoMenuRef:(struct OpaqueMenuRef { } *)a0;
- (void)uninstallAll;
- (id)initWithEventSpecs:(const struct EventTypeSpec { unsigned int x0; unsigned int x1; } *)a0 count:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)installIntoMenuRef:(struct OpaqueMenuRef { } *)a0;
- (void)uninstall;

@end
