@class ASKEventHandlerDelegate;

@interface ASKDelegateEventHandlerImplementor : ASKEventHandlerImplementor {
    ASKEventHandlerDelegate *_eventHandlerDelegate;
}

- (void)finalize;
- (void)disable;
- (void)enable;
- (void)dealloc;
- (id)delegateForObject:(id)a0;
- (id)eventHandlerDelegate;
- (void)setEventHandlerDelegate:(id)a0;

@end
