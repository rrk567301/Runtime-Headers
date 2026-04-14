@class NSDictionary, NSError;

@interface VideosUI.VUIUserCloudStoreSettingsService : NSObject

+ (void)fetchWithCompletionHandler:(void (^)(NSDictionary *, NSError *))a0;
+ (void)updateWithSettings:(NSDictionary *)a0 completionHandler:(void (^)(NSDictionary *, NSError *))a1;

- (id)init;
- (void).cxx_destruct;

@end
