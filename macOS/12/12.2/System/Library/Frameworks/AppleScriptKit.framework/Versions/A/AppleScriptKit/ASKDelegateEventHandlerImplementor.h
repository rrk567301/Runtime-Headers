@class ASKEventHandlerDelegate;

@interface ASKDelegateEventHandlerImplementor : ASKEventHandlerImplementor {
    ASKEventHandlerDelegate *_eventHandlerDelegate;
}

- (void)finalize;
- (void)dealloc;
- (void)disable;
- (void)enable;
- (id)delegateForObject:(id)a0;
- (id)eventHandlerDelegate;
- (void)setEventHandlerDelegate:(id)a0;

@end
