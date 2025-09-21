@class NSMutableDictionary;
@protocol IAMImpressionManagerDelegate;

@interface IAMImpressionManager : NSObject {
    NSMutableDictionary *_activeImpressionForMessageIdentifierFromTargetIdentifier;
    NSMutableDictionary *_inactiveImpressionForMessageIdentifierFromTargetIdentifier;
    char _isApplicationActive;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) id<IAMImpressionManagerDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_transitionToActiveState;
- (char)_endImpressionForMessageWithIdentifier:(id)a0 fromTargetWithIdentifier:(id)a1 displayEndTime:(id)a2;
- (void)_handleApplicationDidBecomeActive;
- (void)_handleApplicationWillResignActive;
- (void)_reportImpression:(id)a0;
- (void)_reportImpressionEventWithDictionary:(id)a0;
- (char)_startImpressionForMessageEntry:(id)a0 fromTargetWithIdentifier:(id)a1 displayStartTime:(id)a2;
- (void)_transitionToInactiveState;
- (void)messageEntry:(id)a0 didAppearFromTargetWithIdentifier:(id)a1 atTime:(id)a2;
- (void)messageWithIdentifier:(id)a0 didDisappearFromTargetWithIdentifier:(id)a1 atTime:(id)a2;

@end
