@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface GEOAPStateFactory : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

@property (retain) NSString *countryCode;

+ (id)sharedFactory;
+ (long long)pipelineStateTypeForPipelineStateName:(id)a0;

- (id)searchResults;
- (id)placeCardRap;
- (void)dealloc;
- (id)impressionObject;
- (void).cxx_destruct;
- (id)mapsPlaceIds;
- (id)init;
- (int)_launchActionFromAPLaunchAction:(int)a0;
- (id)placeCardReveal;
- (double)_monthResolution:(double)a0;
- (int)_privacyAllowedActionFromActualAction:(int)a0;
- (int)_rapPlaceCardTypeForRawType:(int)a0;
- (id)curatedCollectionRedacted;
- (void)deviceCountryChanged:(id)a0;
- (int)logMsgStateTypeForType:(long long)a0;
- (id)mapUIShown;
- (id)mapsServerStateWithCategoryMetadataDisplayed:(id)a0 categoryMetadataSelected:(id)a1;
- (id)mapsServerStateWithDisplayedData:(id)a0 selectedData:(id)a1;
- (id)mapsServerStateWithMapsServerMetadata:(id)a0;
- (id)placeCardStateWithPlaceActionDetails:(id)a0;
- (id)routeStateWithRouteDetails:(id)a0;
- (void)sessionStateForType:(int)a0 callback:(id /* block */)a1;
- (void)sessionStateForType:(int)a0 onQueue:(id)a1 callback:(id /* block */)a2;
- (void)sessionStateForType:(int)a0 sessionAppId:(id)a1 onQueue:(id)a2 callback:(id /* block */)a3;
- (id)stateForType:(long long)a0;
- (id)ugcStateWithPhotoSources:(id)a0;

@end
