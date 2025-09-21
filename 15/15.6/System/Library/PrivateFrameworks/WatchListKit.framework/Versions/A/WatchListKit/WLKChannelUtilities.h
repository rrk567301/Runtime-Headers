@class WLKChannelsResponse, NSArray, NSDictionary, NSError, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface WLKChannelUtilities : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    char _filtered;
    WLKChannelsResponse *_cachedResponse;
    int _shouldRefreshNotificationToken;
    char _shouldRefresh;
    char _isChannelsInProgress;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_inFlightcompletionList;
}

@property (readonly, nonatomic) char loaded;
@property (readonly, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) NSDictionary *channelsByID;
@property (readonly, copy, nonatomic) NSDictionary *channelsByBundleID;
@property (readonly, copy, nonatomic) NSArray *orderedChannels;

+ (id)sharedInstance;
+ (id)_validiTunesBundles;
+ (char)isItunesBundleID:(id)a0;
+ (id)sharedInstanceFiltered;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidateCache;
- (id)_configuration;
- (void)_loadConfigIfNeededWithCompletion:(id /* block */)a0;
- (id)channelForBundleID:(id)a0;
- (id)channelForID:(id)a0;
- (id)channelIDForBundleID:(id)a0;
- (id)initFiltered:(char)a0;
- (char)isItunesOrFirstPartyBundleID:(id)a0;
- (void)loadIfNeededWithCompletion:(id /* block */)a0;
- (void)updateConsentStatusForCachedEntry:(id)a0 consented:(char)a1;

@end
