@class ASKMenuEventTarget;

@interface ASKMenuEventHandler : ASKEventHandler {
    ASKMenuEventTarget *_target;
}

- (void)disable;
- (void)enable;
- (void)dealloc;
- (id)init;
- (id)target;
- (void)setTarget:(id)a0;
- (Class)eventImplementorClass;
- (id)getAppleEvent;
- (id)getAppleEventFromNotification:(id)a0;
- (id)initWithObject:(id)a0 eventHandlerDescription:(id)a1 enable:(BOOL)a2;

@end
