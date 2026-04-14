@class ASKMenuEventTarget;

@interface ASKMenuEventHandler : ASKEventHandler {
    ASKMenuEventTarget *_target;
}

- (void)enable;
- (void)setTarget:(id)a0;
- (void)disable;
- (id)target;
- (id)init;
- (void)dealloc;
- (Class)eventImplementorClass;
- (id)getAppleEvent;
- (id)getAppleEventFromNotification:(id)a0;
- (id)initWithObject:(id)a0 eventHandlerDescription:(id)a1 enable:(BOOL)a2;

@end
