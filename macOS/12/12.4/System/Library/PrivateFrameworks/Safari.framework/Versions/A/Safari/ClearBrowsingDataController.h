@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface ClearBrowsingDataController : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (readonly) NSArray *availableIntervals;

+ (id)allTimeInterval;

- (id)init;
- (void).cxx_destruct;
- (void)clearAllDataWithCompletionHandler:(id /* block */)a0;
- (void)_deleteUnusedSafariDesktopPictureFiles;
- (void)_clearDataAddedAfterDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)_clearBackForwardListForAllTabs;
- (void)_clearVisitedLinksForAllTabs;
- (void)_clearNonTemporalDataIncludingFavicons:(BOOL)a0;
- (void)_clearOCSPCache;
- (void)_clearNonContaineredLibraryCachesAfter:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearAndIncludeTrackingData:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)clearOnlySafariHistoryFromInterval:(id)a0;
- (void)clearDataFromInterval:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearAllExceptTrackingDataWithCompletionHandler:(id /* block */)a0;

@end
