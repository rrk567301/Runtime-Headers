@class NSString, NSArray, CLLocation;

@interface MapsSuggestions.MapsSuggestionsFakeFindMyConnector : NSObject <MapsSuggestions.MapsSuggestionsFindMyConnector> {
    void /* function */ uniqueName;
    void /* function */ friends;
}

@property (nonatomic, copy) NSString *uniqueName;
@property (nonatomic, copy) NSArray *friends;
@property (nonatomic, retain) CLLocation *cachedLocation;
@property (nonatomic, retain) CLLocation *refreshedLocation;

- (id)init;
- (void).cxx_destruct;
- (void)expireCachedLocation;
- (void)latestLocationFor:(NSString *)a0 completionHandler:(void (^)(CLLocation *))a1;
- (void)listOfFriendsWithCompletionHandler:(void (^)(NSArray *))a0;
- (void)locationFor:(NSString *)a0 completionHandler:(void (^)(CLLocation *))a1;
- (void)nilCachedLocation;
- (void)setCachedLocation:(double)a0 :(double)a1;
- (void)setTestFriends;

@end
