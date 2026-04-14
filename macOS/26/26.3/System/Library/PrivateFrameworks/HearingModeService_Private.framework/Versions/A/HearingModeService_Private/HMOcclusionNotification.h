@class CUUserNotificationSession, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMOcclusionNotification : NSObject {
    CUUserNotificationSession *_uiNotificationSessionHearingProtection;
    NSString *_btAddress;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_deviceIconForProductID:(unsigned int)a0;
- (id)_getStringPreferencesForKey:(id)a0;
- (BOOL)_hasOcclusionNotificationsThresholdMet;
- (id)_iconTypeForProductID:(unsigned int)a0;
- (void)_setPreferencesForKey:(id)a0 withStringValue:(id)a1;
- (void)_showHearingProtectionOcclusionNotification:(unsigned int)a0;
- (void)invalidateHearingProtectionOcclusionNotification;
- (BOOL)shouldShowHearingProtectionOcclusionNotification;
- (void)showHearingProtectionOcclusionNotification:(unsigned int)a0 forAddress:(id)a1;

@end
