@class NSArray, CSSearchableItem;

@interface CoreSuggestionsUI.SGTextProcessingServiceWrapper : NSObject {
    void /* unknown type, empty encoding */ service;
    void /* unknown type, empty encoding */ logger;
}

- (void).cxx_destruct;
- (id)init;
- (void)suggestionsFrom:(CSSearchableItem *)a0 persistResults:(BOOL)a1 completionHandler:(void (^)(NSArray *))a2;

@end
