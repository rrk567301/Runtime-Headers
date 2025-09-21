@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface GEOAPStateFactory : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

@property (retain) NSString *countryCode;

+ (id)sharedFactory;
+ (long long)pipelineStateTypeForPipelineStateName:(id)a0;

- (void)dealloc;
- (id)placeCardRap;
- (id)init;
- (id)impressionObject;
- (id)searchResults;
- (id)mapsPlaceIds;
- (void).cxx_destruct;
- (int)_launchActionFromAPLaunchAction:(int)a0;
- (id)placeCardReveal;
- (double)_monthResolution:(double)a0;
- (int)_privacyAllowedActionFromActualAction:(int)a0;
- (int)_rapPlaceCardTypeForRawType:(int)a0;
- (id)curatedCollectionRedacted;
- (void)deviceCountryChanged:(id)a0;
- (int)logMsgStateTypeForType:(long long)a0;
- (id)mapUIShown;
- (void)sessionStateForType:(int)a0 callback:(id /* block */)a1;
- (void)sessionStateForType:(int)a0 onQueue:(id)a1 callback:(id /* block */)a2;
- (void)sessionStateForType:(int)a0 sessionAppId:(id)a1 onQueue:(id)a2 callback:(id /* block */)a3;
- (id)stateForType:(long long)a0;

@end
