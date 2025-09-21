@class NSString;

@interface ATXAppInFocusStream : NSObject <ATXGenericEventStreamBase> {
    NSString *_remoteIDSIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentAppInFocusStartEvent;

- (void).cxx_destruct;
- (id)_appLaunchPublisherWithStartDate:(id)a0 endDate:(id)a1 shouldReverse:(BOOL)a2;
- (int)_atxAppInFocusDisplayTypeForBMAppInFocusDisplayType:(int)a0;
- (int)_atxAppInFocusEventTypeForBMAppInFocusType:(int)a0;
- (id)_createAppInFocusSessionFromEvent:(id)a0 startTime:(id)a1 endTime:(id)a2;
- (void)_enumerateAppLaunchEventsBetweenStartDate:(id)a0 endDate:(id)a1 shouldReverse:(BOOL)a2 type:(int)a3 displayType:(int)a4 bundleIDsFilter:(id)a5 block:(id /* block */)a6;
- (void)_enumerateAppLaunchSessionsBetweenStartDate:(id)a0 endDate:(id)a1 shouldReverse:(BOOL)a2 type:(int)a3 displayType:(int)a4 bundleIDsFilter:(id)a5 block:(id /* block */)a6;
- (id)_fetchBMDeviceFromIDSIdentifier:(id)a0;
- (id)_getAppLaunchEventFromBMAppInFocus:(id)a0;
- (BOOL)_shouldPairStartEvent:(id)a0 withEndEvent:(id)a1;
- (id)currentAppInFocusStartEventAtGivenTime:(id)a0;
- (void)enumerateAllAppLaunchSessionsFromStartDate:(id)a0 bundleIDFilter:(id)a1 block:(id /* block */)a2;
- (void)enumerateAppLaunchEventsBetweenStartDate:(id)a0 endDate:(id)a1 limit:(unsigned long long)a2 shouldReverse:(BOOL)a3 bundleIDFilter:(id)a4 block:(id /* block */)a5;
- (void)enumerateAppLaunchEventsBetweenStartDate:(id)a0 endDate:(id)a1 limit:(unsigned long long)a2 shouldReverse:(BOOL)a3 bundleIDsFilter:(id)a4 block:(id /* block */)a5;
- (void)enumerateAppLaunchEventsBetweenStartDate:(id)a0 endDate:(id)a1 limit:(unsigned long long)a2 shouldReverse:(BOOL)a3 type:(int)a4 displayType:(int)a5 bundleIDsFilter:(id)a6 block:(id /* block */)a7;
- (void)enumerateAppLaunchEventsBetweenStartDate:(id)a0 endDate:(id)a1 shouldReverse:(BOOL)a2 bundleIDFilter:(id)a3 block:(id /* block */)a4;
- (void)enumerateAppLaunchEventsFromStartDate:(id)a0 block:(id /* block */)a1;
- (void)enumerateAppLaunchEventsFromStartDate:(id)a0 bundleIDFilter:(id)a1 block:(id /* block */)a2;
- (void)enumerateAppLaunchSessionsBetweenStartDate:(id)a0 endDate:(id)a1 limit:(unsigned long long)a2 shouldReverse:(BOOL)a3 bundleIDFilter:(id)a4 block:(id /* block */)a5;
- (void)enumerateAppLaunchSessionsBetweenStartDate:(id)a0 endDate:(id)a1 limit:(unsigned long long)a2 shouldReverse:(BOOL)a3 bundleIDsFilter:(id)a4 block:(id /* block */)a5;
- (void)enumerateAppLaunchSessionsBetweenStartDate:(id)a0 endDate:(id)a1 limit:(unsigned long long)a2 shouldReverse:(BOOL)a3 type:(int)a4 displayType:(int)a5 bundleIDsFilter:(id)a6 block:(id /* block */)a7;
- (void)enumerateAppLaunchSessionsBetweenStartDate:(id)a0 endDate:(id)a1 shouldReverse:(BOOL)a2 bundleIDFilter:(id)a3 block:(id /* block */)a4;
- (id)getFirstAppLaunchSessionBetweenStartDate:(id)a0 endDate:(id)a1;
- (id)getFirstAppLaunchStartEventBetweenStartDate:(id)a0 endDate:(id)a1;
- (id)getLastAppLaunchSessionBetweenStartDate:(id)a0 endDate:(id)a1;
- (id)getLastAppLaunchStartEventBetweenStartDate:(id)a0 endDate:(id)a1;
- (id)initWithRemoteIDSIdentifier:(id)a0;
- (unsigned long long)numberOfAppLaunchEventsBetweenStartDate:(id)a0 endDate:(id)a1;
- (unsigned long long)numberOfAppLaunchSessionsBetweenStartDate:(id)a0 endDate:(id)a1 forBundleID:(id)a2;

@end
