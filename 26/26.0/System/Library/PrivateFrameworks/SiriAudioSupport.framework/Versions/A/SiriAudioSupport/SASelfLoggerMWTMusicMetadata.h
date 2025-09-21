@class NSString;

@interface SASelfLoggerMWTMusicMetadata : NSObject {
    void /* function */ errorResolutionType;
    void /* function */ audioQueueType;
}

@property (nonatomic) int musicDomain;
@property (nonatomic) int queueType;
@property (nonatomic) unsigned int queueSize;
@property (nonatomic) BOOL isShuffled;
@property (nonatomic) int prefetchedMetadataSource;
@property (nonatomic) int assetEndPoint;
@property (nonatomic) int streamingContentType;
@property (nonatomic) int formatCodec;
@property (nonatomic) unsigned int formatBitrate;
@property (nonatomic) unsigned int formatBitDepth;
@property (nonatomic) unsigned int formatChannels;
@property (nonatomic) int formatLayout;
@property (nonatomic) unsigned int formatSampleRate;
@property (nonatomic) int formatTier;
@property (nonatomic) unsigned int numberOfSpeakers;
@property (nonatomic) int routeConfiguration;
@property (nonatomic) BOOL isAccountDataReady;
@property (nonatomic) BOOL isStoreBagReady;
@property (nonatomic) BOOL isLeaseReady;
@property (nonatomic) BOOL isOnlineKeyReady;
@property (nonatomic) BOOL isOfflineKeyReady;
@property (nonatomic) BOOL isHlsKeysReady;
@property (nonatomic) BOOL isInterruptingPlayback;
@property (nonatomic) BOOL isRemoteSetQueue;
@property (nonatomic) BOOL isDelegatedPlayback;
@property (nonatomic) BOOL isNonDefaultUser;
@property (nonatomic) BOOL isAutoPlay;
@property (nonatomic) BOOL isFirstPlayAfterAppLaunch;
@property (nonatomic) BOOL isMiniSinfAvailable;
@property (nonatomic) BOOL isSharePlayPlayback;
@property (nonatomic) BOOL isSuzeLease;
@property (nonatomic) int networkConnectionType;
@property (nonatomic) BOOL wasMediaLibraryDatabaseUpgraded;
@property (nonatomic) BOOL isPrimaryUser;
@property (nonatomic, copy) NSString *errorResolutionType;
@property (nonatomic) int endPointType;
@property (nonatomic) int routeType;
@property (nonatomic) unsigned int formatLayoutValue;
@property (nonatomic) int assetSource;
@property (nonatomic) int assetLocation;
@property (nonatomic) int subscriptionType;
@property (nonatomic) BOOL hasLookupWaitTime;
@property (nonatomic) BOOL hasBagWaitTime;
@property (nonatomic) BOOL hasLeaseWaitTime;
@property (nonatomic) BOOL hasSuzeLeaseWaitTime;
@property (nonatomic) BOOL hasSubscriptionAssetLoadWaitTime;
@property (nonatomic) BOOL hasMediaRedownloadWaitTime;
@property (nonatomic) unsigned int cmInitialStartupItemCreationToReadyToPlayDurationInMs;
@property (nonatomic) unsigned int cmInitialStartupItemCreationToLtluDurationInMs;
@property (nonatomic) unsigned int primaryPlaylistConnectionTlsHandshakeDurationInMs;
@property (nonatomic) unsigned int primaryPlaylistRequestDurationInMs;
@property (nonatomic) unsigned int subPlaylistConnectionTlsHandshakeDurationInMs;
@property (nonatomic) unsigned int subPlaylistRequestDurationInMs;
@property (nonatomic) unsigned int contentConnectionTlsHandshakeDurationInMs;
@property (nonatomic) unsigned int contentFirstSegmentDurationInMs;
@property (nonatomic, copy) NSString *audioQueueType;

- (id)init;
- (void).cxx_destruct;

@end
