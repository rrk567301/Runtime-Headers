@class NSArray, NSString, NSData, NSDate, NSURL, NSDictionary;

@interface WBLocalTabAttributes : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic, getter=isDisplayingStandaloneImage) char displayingStandaloneImage;
@property (readonly, nonatomic) double readerViewTopScrollOffset;
@property (readonly, nonatomic) int readingListBookmarkID;
@property (readonly, nonatomic, getter=wasOpenedFromLink) char openedFromLink;
@property (readonly, nonatomic, getter=isShowingReader) char showingReader;
@property (readonly, nonatomic) char isSafeToLoadWebPage;
@property (readonly, copy, nonatomic) NSDate *lastVisitTime;
@property (copy, nonatomic) NSData *sessionStateData;
@property (readonly, copy, nonatomic) NSArray *ancestorTabUUIDs;
@property (readonly, copy, nonatomic) NSDate *dateClosed;
@property (readonly, nonatomic) char isDisposable;
@property (readonly, nonatomic) char isPinned;
@property (readonly, copy, nonatomic) NSURL *pinnedPageURL;
@property (readonly, copy, nonatomic) NSString *pinnedPageTitle;
@property (readonly, nonatomic) char isMuted;
@property (readonly, copy, nonatomic) NSDictionary *queuedNavigation;
@property (readonly, nonatomic) unsigned long long tabIndex;
@property (readonly, nonatomic) NSString *windowUUID;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)localAttributesWithLastVisitTime:(id)a0;
- (id)initWithLastVisitTime:(id)a0 sessionStateData:(id)a1 ancestorTabUUIDs:(id)a2 displayingStandaloneImage:(char)a3 readerViewTopScrollOffset:(double)a4 readingListBookmarkID:(int)a5 openedFromLink:(char)a6 showingReader:(char)a7 queuedNavigation:(id)a8;
- (id)initWithVersion:(long long)a0 safeToLoadWebPage:(char)a1 lastVisitTime:(id)a2 sessionStateData:(id)a3 ancestorTabUUIDs:(id)a4 dateClosed:(id)a5 tabIndex:(unsigned long long)a6 windowUUID:(id)a7 disposable:(char)a8 pinned:(char)a9 pinnedPageURL:(id)a10 pinnedPageTitle:(id)a11 muted:(char)a12 queuedNavigation:(id)a13 displayingStandaloneImage:(char)a14 readerViewTopScrollOffset:(double)a15 readingListBookmarkID:(int)a16 openedFromLink:(char)a17 showingReader:(char)a18;
- (id)localAttributesWithLastVisitTime:(id)a0 queuedNavigation:(id)a1;

@end
