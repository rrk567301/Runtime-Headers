@class NSMutableDictionary;

@interface VUIFavoritesRequestManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *ongoingEntityIDOperationDictionary;

+ (id)sharedInstance;
+ (void)getFavoriteTeamsIgnoringCache:(char)a0 completion:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)sendRequestForEntityID:(id)a0 teamName:(id)a1 action:(unsigned long long)a2 fireBackgroundEvent:(char)a3;

@end
