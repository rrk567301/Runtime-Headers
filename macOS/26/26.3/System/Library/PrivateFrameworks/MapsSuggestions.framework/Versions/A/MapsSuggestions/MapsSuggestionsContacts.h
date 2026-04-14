@class MapsSuggestionsDarwinNotificationTrigger, NSString, MapsSuggestionsLimitedDictionary, MapsSuggestionsMeCard, MapsSuggestionsLocaleChangedTrigger, NSObject, MapsSuggestionsObservers;
@protocol OS_dispatch_queue, MapsSuggestionsContactsConnector, MapsSuggestionsNetworkRequester;

@interface MapsSuggestionsContacts : NSObject <MapsSuggestionsMeCardReader> {
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    id<MapsSuggestionsContactsConnector> _connector;
    id<MapsSuggestionsNetworkRequester> _networkRequester;
    MapsSuggestionsLimitedDictionary *_cache;
    MapsSuggestionsObservers *_meCardObservers;
    MapsSuggestionsMeCard *_currMeCard;
    MapsSuggestionsLocaleChangedTrigger *_localeChangedTrigger;
    MapsSuggestionsDarwinNotificationTrigger *_geoActiveTileGroupChangedTrigger;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initFromResourceDepot:(id)a0;
- (void)awaitQueue;
- (id)profilePictureForIdentifier:(id)a0;
- (void)registerMeCardObserver:(id)a0;
- (id)initWithConnector:(id)a0 networkRequester:(id)a1;
- (char)readMeCardAddressStringsWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)friendlyNameForIndentifier:(id)a0;
- (char)readMeCardWithHandler:(id /* block */)a0;
- (void)dealloc;
- (void)contactsDidUpdate;
- (id)dataForContactWithIdentifier:(id)a0;
- (void)unregisterMeCardObserver:(id)a0;
- (id).cxx_construct;
- (id)contactNameForIdentifier:(id)a0;

@end
