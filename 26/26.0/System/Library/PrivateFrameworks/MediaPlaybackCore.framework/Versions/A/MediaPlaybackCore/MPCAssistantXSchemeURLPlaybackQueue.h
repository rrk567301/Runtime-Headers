@class MPRemotePlaybackQueue, NSArray, NSString, NSURL, NSError, MPCAssistantRemoteControlDestination;

@interface MPCAssistantXSchemeURLPlaybackQueue : MPCAssistantPlaybackQueue {
    void /* unknown type, empty encoding */ _storage;
}

@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSArray *itemURLs;
@property (nonatomic) long long repeatType;
@property (nonatomic) long long shuffleType;
@property (nonatomic, readonly) NSString *description;

+ (BOOL)supportsURL:(id)a0;
+ (BOOL)supportsContainerURL:(id)a0 itemURLs:(id)a1;

- (void).cxx_destruct;
- (void)getPlaybackQueueWithDestination:(MPCAssistantRemoteControlDestination *)a0 completion:(void (^)(MPRemotePlaybackQueue *, NSError *))a1;
- (id)initWithContextID:(id)a0;
- (id)initWithContextID:(id)a0 containerURL:(id)a1 itemURLs:(id)a2;
- (id)initWithContextID:(id)a0 url:(id)a1;

@end
