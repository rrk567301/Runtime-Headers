@class NSSet, NSMutableDictionary;

@interface FMFSessionDataManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *locationsCache;
@property (retain, nonatomic) NSSet *followers;
@property (retain, nonatomic) NSSet *following;
@property (retain, nonatomic) NSSet *locations;
@property (retain, nonatomic) NSSet *fences;

+ (id)sharedInstance;

- (id)followingForHandle:(id)a0;
- (void)abDidChange;
- (id)followerForHandle:(id)a0;
- (id)locationForHandle:(id)a0;
- (void)abPreferencesDidChange;
- (id)favoritesOrdered;
- (id)offerExpirationForHandle:(id)a0 groupId:(id)a1;
- (void).cxx_destruct;

@end
