@class ASKEventHandlerDelegate;

@interface ASKDelegateEventHandlerImplementor : ASKEventHandlerImplementor {
    ASKEventHandlerDelegate *_eventHandlerDelegate;
}

- (void)enable;
- (void)disable;
- (void)finalize;
- (void)dealloc;
- (id)delegateForObject:(id)a0;
- (id)eventHandlerDelegate;
- (void)setEventHandlerDelegate:(id)a0;

@end
