@interface POUtilities : NSObject

+ (char)assistantErrorIsInformational:(id)a0;
+ (id)commandStatusForRemoteStatus:(unsigned int)a0 error:(id)a1 isRemoteStorePlayback:(char)a2;
+ (struct _MRSystemAppPlaybackQueue { } *)createPlaybackQueueFromRequestIdentifiers:(id)a0 startPlaying:(char)a1 assetInfo:(id)a2 requesterSharedUserId:(id)a3 sharedUserIdFromPlayableITunesAccount:(id)a4;
+ (char)errorIsApplicationRequiresPreflight:(id)a0;
+ (char)errorIsMaxStreamCount:(id)a0;
+ (char)errorIsNoNetwork:(id)a0;
+ (id)identifierFromDomainObject:(id)a0;
+ (char)isPodcastsNowPlaying;
+ (void)performPodcastsPlaybackRequestWithIdentifier:(id)a0 assetInfo:(id)a1 decodedRouteUIDs:(id)a2 originatingOutputDeviceUID:(id)a3 startPlaying:(char)a4 requesterSharedUserId:(id)a5 sharedUserIdFromPlayableITunesAccount:(id)a6 context:(id)a7 allowsFallback:(char)a8 completion:(id /* block */)a9;
+ (void)performPodcastsPlaybackRequestWithIdentifier:(id)a0 assetInfo:(id)a1 hashedRouteUIDs:(id)a2 decodedRouteUIDs:(id)a3 originatingOutputDeviceUID:(id)a4 startPlaying:(char)a5 requesterSharedUserId:(id)a6 sharedUserIdFromPlayableITunesAccount:(id)a7 context:(id)a8 allowsFallback:(char)a9 completion:(id /* block */)a10;
+ (void)performPodcastsPlaybackRequestWithIdentifier:(id)a0 assetInfo:(id)a1 hashedRouteUIDs:(id)a2 startPlaying:(char)a3 requesterSharedUserId:(id)a4 sharedUserIdFromPlayableITunesAccount:(id)a5 context:(id)a6 allowsFallback:(char)a7 completion:(id /* block */)a8;
+ (void)performPodcastsPlaybackRequestWithIdentifier:(id)a0 assetInfo:(id)a1 hashedRouteUIDs:(id)a2 startPlaying:(char)a3 requesterSharedUserId:(id)a4 sharedUserIdFromPlayableITunesAccount:(id)a5 context:(id)a6 completion:(id /* block */)a7;
+ (void)setPlaybackRate:(float)a0 failureErrorCode:(long long)a1 completion:(id /* block */)a2;
+ (id)typeFromDomainObject:(id)a0;

@end
