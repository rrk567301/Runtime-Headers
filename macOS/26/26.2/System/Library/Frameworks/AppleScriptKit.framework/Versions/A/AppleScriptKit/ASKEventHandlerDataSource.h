@class NSMutableDictionary;

@interface ASKEventHandlerDataSource : NSObject {
    NSMutableDictionary *_eventHandlers;
}

- (id)init;
- (void)dealloc;
- (void)addEventHandler_ask:(id)a0;
- (id)eventHandlerWithName_ask:(id)a0;
- (id)eventHandlers_ask;
- (void)removeEventHandler_ask:(id)a0;

@end
