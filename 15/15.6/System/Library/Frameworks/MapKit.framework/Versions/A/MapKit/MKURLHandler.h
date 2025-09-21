@protocol MKURLHandlerDelegate;

@interface MKURLHandler : NSObject

@property (weak, nonatomic) id<MKURLHandlerDelegate> delegate;

+ (unsigned char)_MKGetURLSchemeTypeFor:(id)a0;
+ (char)canHandleURL:(id)a0;

- (void).cxx_destruct;
- (char)_treatNavigationDirectionsFrom:(id)a0;
- (char)_handleMapItemHandlesURL:(id)a0 sourceApplication:(id)a1 context:(id)a2;
- (char)_handleMapItemURL:(id)a0 sourceApplication:(id)a1 context:(id)a2;
- (char)_handleMapItems:(id)a0 withOptions:(id)a1 url:(id)a2 sourceApplication:(id)a3 context:(id)a4;
- (char)_handleMapsURL:(id)a0 sourceApplication:(id)a1 context:(id)a2;
- (char)_handleSharedMapURL:(id)a0 sourceApplication:(id)a1 context:(id)a2;
- (char)_treatAllCuratedCollectionsFrom:(id)a0;
- (char)_treatCarDestinationsFrom:(id)a0;
- (char)_treatCollectionFrom:(id)a0;
- (char)_treatContentProvider:(id)a0;
- (char)_treatCuratedCollectionFrom:(id)a0;
- (char)_treatFavoritesFrom:(id)a0;
- (void)_treatGenericOptionsFrom:(id)a0;
- (void)_treatMapTypeFrom:(id)a0;
- (char)_treatPinPositionFrom:(id)a0;
- (char)_treatPublisherFrom:(id)a0;
- (char)_treatRegionFrom:(id)a0;
- (char)_treatReportAProblemFrom:(id)a0;
- (char)_treatSearchFrom:(id)a0;
- (char)_treatSearchRegionFrom:(id)a0;
- (char)_treatShowMyLocationCardFrom:(id)a0;
- (char)_treatShowParkedCarFrom:(id)a0;
- (char)_treatTesterFrom:(id)a0;
- (void)_treatTrackingModeFrom:(id)a0;
- (char)_treatTransitLineFrom:(id)a0;
- (void)adjustOptionsForRAP:(id)a0 options:(id *)a1;
- (char)handleURL:(id)a0 sourceApplication:(id)a1 context:(id)a2;

@end
