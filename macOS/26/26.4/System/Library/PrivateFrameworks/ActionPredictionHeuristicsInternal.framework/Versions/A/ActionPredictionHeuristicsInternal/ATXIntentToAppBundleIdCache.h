@class NSMutableDictionary;

@interface ATXIntentToAppBundleIdCache : NSObject {
    NSMutableDictionary *_intentTypeToBundleIdsCache;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)_appRegistrationDidChange:(id)a0;
- (void)_slowlyFetchBundleIdsForIntent:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchBundleIdsForIntent:(id)a0 completionHandler:(id /* block */)a1;

@end
