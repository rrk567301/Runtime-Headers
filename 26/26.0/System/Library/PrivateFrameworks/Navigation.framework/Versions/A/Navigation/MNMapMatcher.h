@class MNMapMatchingResult, MNLocation;

@interface MNMapMatcher : NSObject {
    void /* unknown type, empty encoding */ _route;
    void /* unknown type, empty encoding */ _matchedPathSegmentsOnRoute;
    void /* unknown type, empty encoding */ _roadIdsOnRoute;
    void /* unknown type, empty encoding */ _locationHistory;
    void /* unknown type, empty encoding */ _locationHistoryDistance;
    void /* unknown type, empty encoding */ _routeRadiusPinnedCenter;
    void /* unknown type, empty encoding */ _backwardsMovementDistance;
    void /* unknown type, empty encoding */ _routeMatchedLocationHistory;
    void /* unknown type, empty encoding */ _hasBeenOnRouteOnce;
    void /* unknown type, empty encoding */ $__lazy_storage_$__routePartitionTree;
    void /* unknown type, empty encoding */ $__lazy_storage_$__mapFeatureAccess;
    void /* unknown type, empty encoding */ $__lazy_storage_$__pathMatcher;
}

+ (id)mapMatcherFor:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)matchWithLocation:(MNLocation *)a0 completionHandler:(void (^)(MNMapMatchingResult *))a1;

@end
