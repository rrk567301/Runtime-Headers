@class NSString, NSObject;
@protocol OS_dispatch_queue, MapsSuggestionsBiomeConnector;

@interface MapsSuggestionsBiome : NSObject <MapsSuggestionsObject> {
    id<MapsSuggestionsBiomeConnector> _connector;
    NSObject<OS_dispatch_queue> *_queue;
    char _registeredForSmartReplies;
    char _registeredForFindMy;
    double _expirationDuration;
    id /* block */ _smartRepliesUpdateHandler;
    id /* block */ _findMyUpdateHandler;
    id /* block */ _handler;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_entriesFromFindMy:(id)a0;
- (id)_entriesFromSmartReplies:(id)a0;
- (char)_shouldAllowEventType:(int)a0;
- (char)entriesFromFindMyWithCompletionHandler:(id /* block */)a0;
- (char)entriesFromSmartRepliesWithCompletionHandler:(id /* block */)a0;
- (id)initFromResourceDepot:(id)a0;
- (void)registerForUpdatesWithHandler:(id /* block */)a0;

@end
