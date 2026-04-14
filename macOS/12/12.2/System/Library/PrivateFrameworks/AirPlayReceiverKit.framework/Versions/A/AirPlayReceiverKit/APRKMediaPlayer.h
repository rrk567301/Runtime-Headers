@class APRKContentKeyHelper, NSString, NSArray, AVPlayerItem, AVQueuePlayer, NSDictionary, APRKMetadata, NSObject, APRKResourceLoaderHelper;
@protocol OS_dispatch_queue, APRKMediaPlayerMessagingDelegate;

@interface APRKMediaPlayer : NSObject <APRKResourceLoaderHelperDelegate, APRKContentKeyHelperDelegate> {
    AVQueuePlayer *_player;
    NSString *_previousItemUUID;
    NSString *_currentItemUUID;
    BOOL _isInterestedInDateRange;
    long long _stallCount;
    id<APRKMediaPlayerMessagingDelegate> _messagingDelegate;
    NSObject<OS_dispatch_queue> *_messageQueue;
    NSArray *_cachedSelectedMediaArray;
    NSDictionary *_cachedSSLProperties;
    APRKResourceLoaderHelper *_resourceLoaderHelper;
    APRKContentKeyHelper *_contentKeyHelper;
    long long _internalPlaybackState;
    struct OpaqueAPSNetworkAddress { } *_sessionReceiverAddr;
    BOOL _isP2PWiFiSession;
    BOOL _isFirstSetRateReceived;
    BOOL _isInvalidated;
}

@property (retain, nonatomic) APRKMetadata *currentItemMetadata;
@property (readonly, nonatomic) AVQueuePlayer *backingAVQueuePlayer;
@property (readonly, nonatomic) AVPlayerItem *currentItem;
@property (weak, nonatomic) id<APRKMediaPlayerMessagingDelegate> messagingDelegate;
@property (nonatomic) BOOL isInterestedInDateRange;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)contentKeyHelper:(id)a0 wantsToPerformContentKeyRequestWithDictionary:(id)a1;
- (void)contentKeyHelper:(id)a0 didGenerateSecureStopRecordPayload:(id)a1;
- (void)resourceLoaderHelper:(id)a0 wantsToPerformUnhandledURLRequestWithDictionary:(id)a1 forRequestID:(id)a2;
- (void)_registerNotificationHandlersForPlayer;
- (void)_unregisterNotificationHandlersAndRemovePlayerItem:(id)a0;
- (void)_unregisterNotificationHandlersForPlayer;
- (void)_updatePlaybackStateWithState:(long long)a0 stoppedBecauseInterrupted:(BOOL)a1 shouldSendUpstreamMessage:(BOOL)a2;
- (id)_processMessageWithDictionaryInternal:(id)a0;
- (void)_sendUpstreamMessageWithDictionary:(id)a0;
- (void)_processUnhandledURLWithDictionary:(id)a0;
- (id)_processPlaybackInfoRequestWithDictionary:(id)a0;
- (void)_setPropertyWithDictionary:(id)a0;
- (id)_getPropertyWithDictionary:(id)a0;
- (void)_insertPlayQueueItemWithDictionary:(id)a0;
- (void)_removePlayQueueItemWithDictionary:(id)a0;
- (void)_setRateWithDictionary:(id)a0;
- (void)_seekWithDictionary:(id)a0;
- (void)_processStreamingKeyWithDictionary:(id)a0;
- (void)_stopWithDictionary:(id)a0;
- (id)_processAuthorizeItemWithDictionary:(id)a0;
- (id)_serializeTimeRanges:(id)a0;
- (id)_SSLPropertiesforTLSInfo:(id)a0;
- (id)_fixedIPContentLocationFromURLString:(id)a0 error:(id *)a1;
- (id)_playerItemForUUID:(id)a0;
- (void)_registerNotificationHandlersAndInsertPlayerItem:(id)a0 afterItem:(id)a1;
- (id)_frontPlayerItem;
- (BOOL)_attemptToSetSelectedMediaArray:(id)a0;
- (id)_currentPlaybackInfoDictionary;
- (void)_sendUpstreamPlaybackStateMessageWithPlaybackStateString:(id)a0 stoppedBecauseInterrupted:(BOOL)a1;
- (void)_handleCurrentItemChangedNotification:(id)a0;
- (void)_handleCurrentItemPlaybackStalledNotification:(id)a0;
- (void)_handleTimeJumpedNotification:(id)a0;
- (void)_handleCurrentItemPlayedToEndNotification:(id)a0;
- (void)_prepareForNewItemPlaybackWithCompletionBlock:(id /* block */)a0;
- (id)initWithP2PWiFiSupport:(BOOL)a0;
- (void)stopWithCompletionBlock:(id /* block */)a0;
- (void)setSessionReceiverAddress:(struct OpaqueAPSNetworkAddress { } *)a0;
- (void)processMessageWithDictionaryAsync:(id)a0;
- (id)processMessageWithDictionarySync:(id)a0;
- (void)processTLSInfoDictionary:(id)a0;
- (void)_sendUpstreamErrorMessageWithError:(id)a0;

@end
