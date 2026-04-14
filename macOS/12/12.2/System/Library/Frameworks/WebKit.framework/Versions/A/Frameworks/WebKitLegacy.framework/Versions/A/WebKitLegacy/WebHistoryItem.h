@class NSString, NSImage, WebHistoryItemPrivate;

@interface WebHistoryItem : NSObject <NSCopying> {
    WebHistoryItemPrivate *_private;
}

@property (readonly, copy, nonatomic) NSString *originalURLString;
@property (readonly, copy, nonatomic) NSString *URLString;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) double lastVisitedTimeInterval;
@property (copy, nonatomic) NSString *alternateTitle;
@property (readonly, nonatomic) NSImage *icon;

+ (void)initialize;
+ (id)entryWithURL:(id)a0;
+ (void)_releaseAllPendingPageCaches;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)target;
- (id)URL;
- (void)setTitle:(id)a0;
- (id)dictionaryRepresentation;
- (id)children;
- (id)initFromDictionaryRepresentation:(id)a0;
- (void)setViewState:(id)a0;
- (struct CGPoint { double x0; double x1; })scrollPoint;
- (void)_visitedWithTitle:(id)a0;
- (id)initWithURLString:(id)a0 title:(id)a1 lastVisitedTimeInterval:(double)a2;
- (id)_redirectURLs;
- (id)initWithWebCoreHistoryItem:(void *)a0;
- (id)initWithURL:(id)a0 title:(id)a1;
- (id)initWithURLString:(id)a0 title:(id)a1 displayTitle:(id)a2 lastVisitedTimeInterval:(double)a3;
- (BOOL)isTargetItem;
- (id)RSSFeedReferrer;
- (void)setRSSFeedReferrer:(id)a0;
- (BOOL)lastVisitWasFailure;
- (BOOL)_isInBackForwardCache;
- (BOOL)_hasCachedPageExpired;

@end
