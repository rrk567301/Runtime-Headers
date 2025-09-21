@interface POUtilities : NSObject

+ (BOOL)assistantErrorIsInformational:(id)a0;
+ (id)commandStatusForRemoteStatus:(unsigned int)a0 error:(id)a1 isRemoteStorePlayback:(BOOL)a2;
+ (struct _MRSystemAppPlaybackQueue { } *)createPlaybackQueueFromRequestIdentifiers:(id)a0 startPlaying:(BOOL)a1 assetInfo:(id)a2 isSiriRequest:(BOOL)a3 requesterSharedUserId:(id)a4 sharedUserIdFromPlayableITunesAccount:(id)a5;
+ (BOOL)errorIsApplicationRequiresPreflight:(id)a0;
+ (BOOL)errorIsMaxStreamCount:(id)a0;
+ (BOOL)errorIsNoNetwork:(id)a0;
+ (id)identifierFromDomainObject:(id)a0;
+ (BOOL)isPodcastsNowPlaying;
+ (void)performPodcastsPlaybackRequestWithIdentifier:(id)a0 assetInfo:(id)a1 decodedRouteUIDs:(id)a2 originatingOutputDeviceUID:(id)a3 startPlaying:(BOOL)a4 requesterSharedUserId:(id)a5 sharedUserIdFromPlayableITunesAccount:(id)a6 context:(id)a7 allowsFallback:(BOOL)a8 completion:(id /* block */)a9;
+ (void)performPodcastsPlaybackRequestWithIdentifier:(id)a0 assetInfo:(id)a1 hashedRouteUIDs:(id)a2 decodedRouteUIDs:(id)a3 originatingOutputDeviceUID:(id)a4 startPlaying:(BOOL)a5 requesterSharedUserId:(id)a6 sharedUserIdFromPlayableITunesAccount:(id)a7 context:(id)a8 allowsFallback:(BOOL)a9 completion:(id /* block */)a10;
+ (void)performPodcastsPlaybackRequestWithIdentifier:(id)a0 assetInfo:(id)a1 hashedRouteUIDs:(id)a2 startPlaying:(BOOL)a3 requesterSharedUserId:(id)a4 sharedUserIdFromPlayableITunesAccount:(id)a5 context:(id)a6 allowsFallback:(BOOL)a7 completion:(id /* block */)a8;
+ (void)performPodcastsPlaybackRequestWithIdentifier:(id)a0 assetInfo:(id)a1 hashedRouteUIDs:(id)a2 startPlaying:(BOOL)a3 requesterSharedUserId:(id)a4 sharedUserIdFromPlayableITunesAccount:(id)a5 context:(id)a6 completion:(id /* block */)a7;
+ (void)setPlaybackRate:(float)a0 failureErrorCode:(long long)a1 completion:(id /* block */)a2;
+ (id)typeFromDomainObject:(id)a0;

@end
