@protocol VCTelephonyInterfaceDelegate;

@interface VCTelephonyInterface : NSObject {
    id _delegate;
}

@property id<VCTelephonyInterfaceDelegate> delegate;

- (void)dealloc;
- (id)init;
- (BOOL)registerForNotifications;
- (void)unregisterForNotifications;
- (id)initWithTelephonySubscriptionSlot:(long long)a0;
- (void)getAnbrActivationStateWithCompletionHandler:(id /* block */)a0;
- (void)queryAnbrBitrateRecommendation:(unsigned int)a0 direction:(long long)a1 completionHandler:(id /* block */)a2;
- (void)handleTelephonyNotification:(id)a0 withInfo:(id)a1;
- (void)handleVocoderNotificationWithInfo:(id)a0;
- (id)translateVocoderTypeToCoreAudioType:(id)a0;
- (void)notifyCodecModeChangeEventToCT:(struct _VCAudioCodecModeChangeEvent { int x0; int x1; int x2; unsigned int x3; })a0;

@end
