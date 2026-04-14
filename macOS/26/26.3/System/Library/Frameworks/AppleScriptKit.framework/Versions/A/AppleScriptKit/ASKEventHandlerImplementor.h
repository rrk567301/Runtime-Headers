@class ASKEventHandler;

@interface ASKEventHandlerImplementor : NSObject {
    ASKEventHandler *_eventHandler;
}

- (void)enable;
- (void)disable;
- (id)eventHandler;
- (void)setEventHandler:(id)a0;
- (void)dealloc;
- (id)initWithEventHandler:(id)a0;

@end
