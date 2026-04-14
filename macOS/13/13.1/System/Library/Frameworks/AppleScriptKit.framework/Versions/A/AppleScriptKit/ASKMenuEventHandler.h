@class ASKMenuEventTarget;

@interface ASKMenuEventHandler : ASKEventHandler {
    ASKMenuEventTarget *_target;
}

- (void)dealloc;
- (id)init;
- (id)target;
- (void)setTarget:(id)a0;
- (void)disable;
- (void)enable;
- (id)initWithObject:(id)a0 eventHandlerDescription:(id)a1 enable:(BOOL)a2;
- (id)getAppleEvent;
- (id)getAppleEventFromNotification:(id)a0;
- (Class)eventImplementorClass;

@end
