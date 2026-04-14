@class NSString;

@interface MapsSuggestions.MapsSuggestionsContactActivity : NSObject <MapsSuggestionsObject> {
    void /* unknown type, empty encoding */ _biome;
    void /* unknown type, empty encoding */ _contacts;
    void /* unknown type, empty encoding */ _findMy;
    void /* unknown type, empty encoding */ _networkRequester;
    void /* unknown type, empty encoding */ _queue;
    void /* unknown type, empty encoding */ _cacheForMapItems;
    void /* function */ uniqueName;
}

@property (nonatomic, copy) NSString *uniqueName;
@property (nonatomic, weak) void /* function */ contactActivityDelegate;

- (void).cxx_destruct;
- (id)init;
- (id)initFromResourceDepot:(id)a0;
- (void)contactActivityEntriesWith:(id /* block */)a0;

@end
