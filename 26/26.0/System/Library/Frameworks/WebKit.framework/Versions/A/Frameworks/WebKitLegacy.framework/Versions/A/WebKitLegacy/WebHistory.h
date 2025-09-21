@class NSArray, WebHistoryPrivate;

@interface WebHistory : NSObject {
    WebHistoryPrivate *_historyPrivate;
}

@property (readonly, copy, nonatomic) NSArray *orderedLastVisitedDays;
@property (nonatomic) int historyItemLimit;
@property (nonatomic) int historyAgeInDaysLimit;

+ (void)_setVisitedLinkTrackingEnabled:(BOOL)a0;
+ (void)_removeAllVisitedLinks;
+ (id)optionalSharedHistory;
+ (void)setOptionalSharedHistory:(id)a0;

- (id)_data;
- (void)dealloc;
- (id)allItems;
- (void)addItems:(id)a0;
- (id)init;
- (void)removeAllItems;
- (void)removeItems:(id)a0;
- (BOOL)loadFromURL:(id)a0 error:(id *)a1;
- (void)_addVisitedLinksToVisitedLinkStore:(void *)a0;
- (id)_itemForURLString:(id)a0;
- (void)_sendNotification:(id)a0 entries:(id)a1;
- (void)_visitedURL:(id)a0 withTitle:(id)a1 method:(id)a2 wasFailure:(BOOL)a3;
- (BOOL)containsURL:(id)a0;
- (id)itemForURL:(id)a0;
- (id)orderedItemsLastVisitedOnDay:(id)a0;
- (BOOL)saveToURL:(id)a0 error:(id *)a1;
- (void)timeZoneChanged:(id)a0;

@end
