@class NSMutableDictionary, NSString, NSMutableSet, NSArray, NSObject, NSLock;
@protocol OS_dispatch_queue;

@interface RTTSettings : NSObject {
    NSLock *_synchronizeDomainsLock;
    NSMutableDictionary *_cachedSettings;
}

@property (retain, nonatomic) NSMutableSet *registeredNotifications;
@property (retain, nonatomic) NSMutableSet *synchronizePreferences;
@property (retain, nonatomic) NSMutableDictionary *updateBlocks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *nanoSynchronizeQueue;
@property (nonatomic) char TTYHardwareEnabled;
@property (nonatomic) char TTYSoftwareEnabled;
@property (nonatomic) char incomingCallsTTY;
@property (nonatomic) char ttyShouldBeRealtime;
@property (retain, nonatomic) NSString *preferredRelayNumber;
@property (readonly, nonatomic) char showsRTTNotifications;
@property (readonly, nonatomic) char rttLiveTranscriptionsEnabled;
@property (retain, nonatomic) NSArray *cannedResponses;
@property (nonatomic) char continuityRTTIsSupported;
@property (nonatomic) char continuityEmergencyRTTIsSupported;
@property (nonatomic) char supportsRelayCalling;
@property (nonatomic) char isRelayCallingEnabled;
@property (nonatomic) char hasReceivedRTTCall;
@property (nonatomic) long long incomingTTYCallCount;
@property (nonatomic) long long outgoingTTYCallCount;
@property (nonatomic) double lastCallCountReset;
@property (nonatomic) double lastDBVacuum;
@property (nonatomic) char internalOverrideTTYAvailability;

+ (void)initialize;
+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)currentLocale;
- (long long)settingsVersion;
- (void)_registerForNotification:(id)a0;
- (void)registerUpdateBlock:(id /* block */)a0 forRetrieveSelector:(SEL)a1 withListener:(id)a2;
- (id)valueForPreferenceKey:(id)a0;
- (char)TTYHardwareEnabledForContext:(id)a0;
- (char)TTYSoftwareEnabledForContext:(id)a0;
- (void)clearServerSettingsCacheForKey:(id)a0;
- (void)migrateSettings;
- (id)preferredRelayNumberForContext:(id)a0;
- (void)setIncomingCallsTTY:(char)a0 forContext:(id)a1;
- (void)_handlePreferenceChanged:(id)a0;
- (id)_notificationForPreferenceKey:(id)a0;
- (id)_preferenceKeyForSelector:(SEL)a0;
- (id)_selectorMap;
- (void)_setValue:(id)a0 forPreferenceKey:(id)a1;
- (void)_setValue:(id)a0 forPreferenceKey:(id)a1 andContext:(id)a2;
- (void)_synchronizeIfNecessary:(id)a0;
- (char)boolValueForKey:(id)a0 andContext:(id)a1 withDefaultValue:(char)a2;
- (char)boolValueForKey:(id)a0 withDefaultValue:(char)a1;
- (void)clearAllServerSettingsCache;
- (char)incomingCallsTTYForContext:(id)a0;
- (long long)integerValueForKey:(id)a0 withDefaultValue:(long long)a1;
- (id)notificationForSelector:(SEL)a0;
- (id)objectValueForKey:(id)a0 andContext:(id)a1 withClass:(Class)a2 andDefaultValue:(id)a3;
- (id)objectValueForKey:(id)a0 withClass:(Class)a1 andDefaultValue:(id)a2;
- (void)resetCannedResponses;
- (char)rttLiveTranscriptionsEnabledForContext:(id)a0;
- (char)rttLiveTranscriptionsFeatureFlagEnabled;
- (SEL)selectorForPreferenceKey:(id)a0;
- (void)setPreferredRelayNumber:(id)a0 forContext:(id)a1;
- (void)setRTTLiveTranscriptionsEnabled:(char)a0 forContext:(id)a1;
- (void)setSettingsVersion:(long long)a0;
- (void)setShowsRTTNotifications:(char)a0 forContext:(id)a1;
- (void)setTTYHardwareEnabled:(char)a0 forContext:(id)a1;
- (void)setTTYShouldBeRealtime:(char)a0 forContext:(id)a1;
- (void)setTTYSoftwareEnabled:(char)a0 forContext:(id)a1;
- (char)shouldMigrateSettings;
- (char)showsRTTNotificationsForContext:(id)a0;
- (char)ttyShouldBeRealtimeForContext:(id)a0;
- (void)updateGizmoValueIfNeeded:(id)a0 forPreferenceKey:(id)a1;
- (id)uuidFromContext:(id)a0;
- (id)valueForPreferenceKey:(id)a0 andContext:(id)a1;

@end
