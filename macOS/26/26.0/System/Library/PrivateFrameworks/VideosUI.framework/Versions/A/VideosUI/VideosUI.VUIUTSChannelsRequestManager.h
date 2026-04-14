@class NSString, NSDictionary, NSArray, NSError;

@interface VideosUI.VUIUTSChannelsRequestManager : NSObject {
    void /* unknown type, empty encoding */ response;
    void /* unknown type, empty encoding */ responseOrdered;
    void /* unknown type, empty encoding */ loadTask;
}

+ (id)sharedInstance;

- (void)resetCache;
- (id)init;
- (void).cxx_destruct;
- (void)allChannels:(void (^)(NSDictionary *, NSError *))a0;
- (void)channelForID:(NSString *)a0 completion:(void (^)(NSDictionary *, NSError *))a1;
- (void)getChannelForBundleID:(NSString *)a0 completion:(void (^)(NSDictionary *, NSError *))a1;
- (BOOL)isStoreBundleID:(id)a0;
- (void)loadIfNeededWithCompletion:(void (^)(BOOL, NSError *))a0;
- (void)orderedChannels:(void (^)(NSArray *, NSError *))a0;

@end
