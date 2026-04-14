@class NSPointerArray, AVRoutingWeakReference, NSObject;
@protocol OS_dispatch_queue, AVRoutingPlaybackParticipant;

@interface AVRoutingPlaybackArbiter : NSObject {
    AVRoutingWeakReference *_weakReferenceToPreferredParticipantForNonMixableAudio;
    AVRoutingWeakReference *_weakReferenceToPreferredParticipantForExternalPlayback;
    NSPointerArray *_allTrackedParticipants;
    id _externalPlaybackStatusChangedNotificationToken;
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (weak, nonatomic) id<AVRoutingPlaybackParticipant> preferredParticipantForNonMixableAudioRoutes;
@property (weak, nonatomic) id<AVRoutingPlaybackParticipant> preferredParticipantForExternalPlayback;

+ (id)sharedRoutingPlaybackArbiter;

- (void)dealloc;
- (id)init;
- (void)deregisterParticipant:(id)a0;
- (void)registerParticipant:(id)a0;
- (void)_updateExternalPlaybackStatusNotificationListenerToParticipant:(id)a0;
- (void)_addTrackedParticipant:(id)a0;
- (id)_allTrackedParticipants;
- (BOOL)_externalPlaybackIsActiveForParticipant:(id)a0;
- (BOOL)_externalPlaybackPriorityForParticipant:(id)a0;
- (BOOL)_nonMixablePriorityForParticipant:(id)a0;
- (void)_removeTrackedParticipant:(id)a0;
- (void)_setDefaultExternalPlaybackPriorityForParticipant:(id)a0;
- (void)_setDefaultNonMixableAudioPriorityForParticipant:(id)a0;
- (void)_setExternalPlaybackPriority:(BOOL)a0 forParticipant:(id)a1;
- (void)_setNonMixableAudioPriority:(BOOL)a0 forParticipant:(id)a1;
- (void)_setWeakRefToPreferredParticipantForExternalPlayback:(id)a0;
- (void)_setWeakRefToPreferredParticipantForNonMixableAudio:(id)a0;
- (void)_updatePreferredParticipantForExternalPlaybackFrom:(id)a0 toParticipant:(id)a1 checkingAllParticipants:(id)a2;
- (void)_updatePreferredParticipantForNonMixableAudioRouteFrom:(id)a0 toParticipant:(id)a1 checkingAllParticipants:(id)a2;

@end
