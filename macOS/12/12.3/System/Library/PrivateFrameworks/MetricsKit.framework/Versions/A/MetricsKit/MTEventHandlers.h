@class MTBaseEventDataProvider, NSMutableDictionary;

@interface MTEventHandlers : MTObject

@property (retain) MTBaseEventDataProvider *base;
@property (retain) NSMutableDictionary *registrations;

- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (void)registerDefaultEventHandlers;
- (Class)baseDataProviderClass;
- (void)registerEventHandlerName:(id)a0 eventHandlerClass:(Class)a1 eventData:(id)a2;
- (void)registerEventHandlerName:(id)a0 eventHandlerClass:(Class)a1;
- (void)registerEventHandlerName:(id)a0 eventData:(id)a1;

@end
