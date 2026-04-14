@class NSString, CLLocation, NSArray;

@interface MapsSuggestions.MapsSuggestionsRealFindMyConnector : NSObject <MapsSuggestions.MapsSuggestionsFindMyConnector> {
    void /* function */ uniqueName;
}

@property (nonatomic, copy) NSString *uniqueName;

- (void).cxx_destruct;
- (id)init;
- (void)latestLocationFor:(NSString *)a0 completionHandler:(void (^)(CLLocation *))a1;
- (void)listOfFriendsWithCompletionHandler:(void (^)(NSArray *))a0;
- (void)locationFor:(NSString *)a0 completionHandler:(void (^)(CLLocation *))a1;

@end
