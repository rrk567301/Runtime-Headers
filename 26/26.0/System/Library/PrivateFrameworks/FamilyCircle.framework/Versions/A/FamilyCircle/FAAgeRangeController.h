@class FAAgeRangeDaemonConnection;

@interface FAAgeRangeController : NSObject {
    FAAgeRangeDaemonConnection *_daemonConnection;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDaemonXPCEndpoint:(id)a0;
- (void)deleteAgeRangesWith:(id)a0 completion:(id /* block */)a1;
- (void)fetchAgeRangesWith:(id)a0 completion:(id /* block */)a1;
- (void)fetchAgeWithCompletionHandler:(id /* block */)a0;
- (void)fetchAltDSIDWithCompletionHandler:(id /* block */)a0;
- (void)fetchFamilyCircleWithCompletionHandler:(id /* block */)a0;
- (void)fetchPrivacyVersionForAltDSID:(id)a0 completion:(id /* block */)a1;
- (void)globalStateForAltDSID:(id)a0 completion:(id /* block */)a1;
- (void)postAgeRangeNotificationWith:(id)a0 lowerAgeBound:(id)a1 upperAgeBound:(id)a2 completion:(id /* block */)a3;
- (void)requestAgeRangeWith:(id)a0 userAgeOverride:(id)a1 altDSID:(id)a2 bundleID:(id)a3 appName:(id)a4 attestedAtOverrideInDays:(id)a5 completion:(id /* block */)a6;
- (void)saveAgeRangeGlobalState:(int)a0 forAltDSID:(id)a1 cacheDuration:(id)a2 privacyVersion:(id)a3 completion:(id /* block */)a4;
- (void)saveAgeRangeWith:(id)a0 completion:(id /* block */)a1;
- (void)setGlobalStateForAltDSID:(int)a0 forAltDSID:(id)a1 privacyVersion:(id)a2 completion:(id /* block */)a3;
- (void)shouldPromptAgeRangeWith:(id)a0 bundleID:(id)a1 appName:(id)a2 privacyVersion:(id)a3 userAgeOverride:(id)a4 attestedAtOverrideInDays:(id)a5 completion:(id /* block */)a6;
- (void)updateAgeRangeWith:(id)a0 completion:(id /* block */)a1;

@end
