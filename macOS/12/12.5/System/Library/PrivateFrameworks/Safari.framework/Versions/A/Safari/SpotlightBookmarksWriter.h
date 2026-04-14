@class NSString, BookmarksController, WBSSiriIntelligenceDonor, NSTimer;

@interface SpotlightBookmarksWriter : NSObject <OldSpotlightDataWriter> {
    NSTimer *_donationTimer;
}

@property (readonly, weak, nonatomic) BookmarksController *bookmarksController;
@property (readonly, weak, nonatomic) WBSSiriIntelligenceDonor *siriIntelligenceDonor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBookmarksController:(id)a0 siriIntelligenceDonor:(id)a1;
- (void)_bookmarksWereChanged:(id)a0;
- (void)_scheduleBookmarksDonationAfterDelay:(double)a0;
- (void)_donateBookmarksToCoreSpotlight;
- (void)_removeCacheFileForBookmark:(id)a0 inDirectory:(id)a1;
- (void)_writeCacheFileForBookmark:(id)a0 inDirectory:(id)a1;
- (void)deleteSpotlightCacheFilesForItems:(id)a0 ofDataType:(id)a1 inDirectory:(id)a2;
- (void)addSpotlightCacheFilesForItems:(id)a0 ofDataType:(id)a1 inDirectory:(id)a2;
- (id)fileExtensionForDataType:(id)a0;
- (id)URLToVisitFromSpotlightCacheFile:(id)a0 ofDataType:(id)a1;

@end
