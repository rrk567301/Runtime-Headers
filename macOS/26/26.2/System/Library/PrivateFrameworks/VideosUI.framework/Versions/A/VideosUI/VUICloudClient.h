@class NSMutableDictionary;

@interface VUICloudClient : NSObject

@property (retain, nonatomic) NSMutableDictionary *artworkMap;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)loadArtworkURLsForPurchaseHistoryIDs:(id)a0 completionHandler:(id /* block */)a1;

@end
