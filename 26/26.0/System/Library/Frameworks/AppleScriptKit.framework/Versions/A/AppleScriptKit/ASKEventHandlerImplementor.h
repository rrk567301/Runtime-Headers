@class ASKEventHandler;

@interface ASKEventHandlerImplementor : NSObject {
    ASKEventHandler *_eventHandler;
}

- (void)disable;
- (void)enable;
- (void)setEventHandler:(id)a0;
- (id)eventHandler;
- (void)dealloc;
- (id)initWithEventHandler:(id)a0;

@end
