@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface ClearBrowsingDataController : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (readonly) NSArray *availableIntervals;

+ (id)allTimeInterval;

- (id)init;
- (void).cxx_destruct;
- (void)_clearBackForwardListForAllTabs;
- (void)_clearOCSPCache;
- (void)_clearDataAddedAfterDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)_clearNonContaineredLibraryCachesAfter:(id)a0 completionHandler:(id /* block */)a1;
- (void)_clearNonTemporalDataIncludingFavicons:(BOOL)a0;
- (void)_clearVisitedLinksForAllTabs;
- (void)_deleteUnusedSafariDesktopPictureFiles;
- (void)clearAllDataWithCompletionHandler:(id /* block */)a0;
- (void)clearAllExceptTrackingDataWithCompletionHandler:(id /* block */)a0;
- (void)clearAndIncludeTrackingData:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)clearDataFromInterval:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearOnlySafariHistoryFromInterval:(id)a0;

@end
