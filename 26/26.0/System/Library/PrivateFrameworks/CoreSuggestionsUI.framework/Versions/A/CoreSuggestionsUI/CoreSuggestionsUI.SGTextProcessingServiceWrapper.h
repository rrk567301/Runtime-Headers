@class NSArray, CSSearchableItem;

@interface CoreSuggestionsUI.SGTextProcessingServiceWrapper : NSObject {
    void /* unknown type, empty encoding */ service;
    void /* unknown type, empty encoding */ logger;
}

- (id)init;
- (void).cxx_destruct;
- (void)suggestionsFrom:(CSSearchableItem *)a0 persistResults:(BOOL)a1 completionHandler:(void (^)(NSArray *))a2;

@end
