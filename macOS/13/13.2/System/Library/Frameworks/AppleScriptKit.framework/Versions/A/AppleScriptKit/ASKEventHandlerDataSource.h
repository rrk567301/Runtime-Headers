@class NSMutableDictionary;

@interface ASKEventHandlerDataSource : NSObject {
    NSMutableDictionary *_eventHandlers;
}

- (void)dealloc;
- (id)init;
- (id)eventHandlers_ask;
- (void)addEventHandler_ask:(id)a0;
- (void)removeEventHandler_ask:(id)a0;
- (id)eventHandlerWithName_ask:(id)a0;

@end
