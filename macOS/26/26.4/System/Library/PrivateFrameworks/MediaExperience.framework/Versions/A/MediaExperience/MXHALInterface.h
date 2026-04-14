@class NSNumber;
@protocol CoreAudioOrchestration;

@interface MXHALInterface : NSObject {
    id<CoreAudioOrchestration> mOrchestrator;
}

@property (retain) NSNumber *isolatedUseCaseSiriIDConfigurationToken;
@property (retain) NSNumber *isolatedUseCaseAvailabilityChangedSubscriptionToken;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (int)activateConfiguration;
- (int)createConfiguration:(unsigned int)a0;
- (int)deactivateConfiguration;
- (int)destroyConfiguration;
- (unsigned int)getAudioDeviceForUID:(struct __CFString { } *)a0;
- (id)getProperty:(id)a0 payload:(id)a1;
- (id)getPropertyForEventDescription:(id)a0 eventDescription:(id)a1;
- (id)getStatusResponse:(id)a0 statusResponseField:(int)a1;
- (id)getStravinskyProperty:(struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; })a0 deviceUID:(id)a1;
- (BOOL)isIsolatedUseCaseAvailable:(id)a0;
- (void)registerForEventCallback;
- (int)setProperty:(id)a0 propertyAddress:(struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; })a1 value:(id)a2 valueType:(id)a3;
- (id)subscribeForIsolatedUseCaseDevicesAvailabilityChangedNotification;
- (id)subscribeForNotification:(id)a0 payload:(id)a1;
- (id)subscribeForNotificationWithPropertyAddress:(struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; })a0 deviceUID:(id)a1;
- (int)unsubscribeFromNotification:(id)a0 subscriptionToken:(id)a1;
- (int)validateStravinskyMessageResponse:(id)a0 expectedHeaderResponseType:(id)a1;

@end
