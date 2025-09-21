@class NSDictionary, NSArray, NSObject, NSNumber;
@protocol OS_dispatch_queue, TUAudioSystemControllerDelegate;

@interface TUAudioSystemController : TUAudioController {
    NSObject<OS_dispatch_queue> *_uplinkMutedQueue;
    NSObject<OS_dispatch_queue> *_downlinkMutedQueue;
    NSObject<OS_dispatch_queue> *_ttyQueue;
    NSObject<OS_dispatch_queue> *_pickableRoutesQueue;
    NSNumber *_isUplinkMutedCached;
    NSNumber *_isDownlinkMutedCached;
    NSNumber *_isTTYCached;
    NSArray *_pickableRoutesForTTY;
    NSArray *_pickableRoutesForPhoneCall;
    NSArray *_pickableRoutesForPlayAndRecordVideo;
    NSArray *_pickableRoutesForPlayAndRecordVoice;
    NSArray *_pickableRoutesForPlayAndRecordRemoteVoice;
    NSArray *_pickableRoutesForVoicemail;
    NSArray *_currentPickableRoutes;
    char _isRequestingUplinkMuted;
    char _isRequestingDownlinkMuted;
    char _isRequestingTTY;
    char _isRequestingPickableRoutesForTTY;
    char _isRequestingPickableRoutesForPhoneCall;
    char _isRequestingPickableRoutesForPlayAndRecordVideo;
    char _isRequestingPickableRoutesForPlayAndRecordVoice;
    char _isRequestingPickableRoutesForPlayAndRecordRemoteVoice;
    char _isRequestingPickableRoutesForVoicemail;
    unsigned long long _lastUplinkMutedRequestScheduleTime;
    unsigned long long _lastDownlinkMutedRequestScheduleTime;
    unsigned long long _lastTTYRequestScheduleTime;
    unsigned long long _lastTTYPickableRoutesScheduleTime;
    unsigned long long _lastPhoneCallCategoryRoutesScheduleTime;
    unsigned long long _lastPlayAndRecordVideoRoutesScheduleTime;
    unsigned long long _lastPlayAndRecordVoiceRoutesScheduleTime;
    unsigned long long _lastPlayAndRecordRemoteVoiceRoutesScheduleTime;
    unsigned long long _lastVoicemailRoutesScheduleTime;
}

@property (class, readonly, nonatomic) TUAudioSystemController *sharedAudioSystemController;

@property (weak, nonatomic) id<TUAudioSystemControllerDelegate> delegate;
@property (nonatomic) float activeCategoryVolume;
@property (nonatomic, getter=isUplinkMuted) char uplinkMuted;
@property (nonatomic, getter=isDownlinkMuted) char downlinkMuted;
@property (readonly, nonatomic, getter=isTTY) char tty;
@property (readonly, copy, nonatomic) NSDictionary *pickedRouteAttribute;
@property (readonly, copy, nonatomic) NSArray *bestGuessPickableRoutesForAnyCall;
@property (readonly, copy, nonatomic) NSArray *pickableRoutesForTTY;
@property (readonly, nonatomic) char otherSessionsRequestNoRingtoneInterruption;

+ (id)filteredPickableRoutesFromPickableRoutes:(id)a0;
+ (char)isPhoneCallAudioCategory:(id)a0;
+ (id)sourceIdentifierForRouteID:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_handleVolumeDidChangeNotification:(id)a0;
- (void)_getPickableRoutesForCategory:(id)a0 mode:(id)a1 onlyKnownCombinations:(char)a2 completion:(id /* block */)a3;
- (void)_handleDownlinkMuteDidChangeNotification:(id)a0;
- (void)_handlePickableRoutesDidChangeNotification:(id)a0;
- (void)_handleUplinkMuteDidChangeNotification:(id)a0;
- (void)_loadCurrentPickableRoutesWithCompletion:(id /* block */)a0;
- (void)_mediaServicesWereReset:(id)a0;
- (id)_pickableRoutesForPhoneCallWithForceNewRequest:(char)a0;
- (id)_pickableRoutesForPlayAndRecordRemoteVoiceWithForceNewRequest:(char)a0;
- (id)_pickableRoutesForPlayAndRecordVideoWithForceNewRequest:(char)a0;
- (id)_pickableRoutesForPlayAndRecordVoiceWithForceNewRequest:(char)a0;
- (id)_pickableRoutesForTTYWithForceNewRequest:(char)a0;
- (id)_pickableRoutesForVoiceMailWithForceNewRequest:(char)a0;
- (void)_subscribeToNotificationAttributes;
- (void)_updateCachedState;
- (void)clearUplinkMutedCache;
- (id)currentlyPickedRouteIdForCategory:(id)a0 andMode:(id)a1;
- (void)getPickableRoutesForCategory:(id)a0 mode:(id)a1 completion:(id /* block */)a2;
- (char)pickRoute:(id)a0 error:(id *)a1;
- (id)pickableRouteWithUniqueIdentifier:(id)a0;
- (id)pickableRoutesForActiveCall;
- (id)pickableRoutesForCategory:(id)a0 andMode:(id)a1;
- (char)shouldSuppressCallUsingRoute:(id)a0;
- (void)switchBluetoothAudioFormats;
- (void)triggerEndInterruptionForAudioSessionID:(id)a0;

@end
