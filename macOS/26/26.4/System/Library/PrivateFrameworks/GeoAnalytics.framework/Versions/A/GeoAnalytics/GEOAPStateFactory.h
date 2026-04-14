@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface GEOAPStateFactory : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

@property (retain) NSString *countryCode;

+ (id)sharedFactory;
+ (long long)pipelineStateTypeForPipelineStateName:(id)a0;

- (id)mapsPlaceIds;
- (id)impressionObject;
- (void).cxx_destruct;
- (id)init;
- (id)searchResults;
- (void)dealloc;
- (id)placeCardRap;
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
- (id)stateForType:(long long)a0;
- (id)ugcStateWithPhotoSources:(id)a0;

@end
