@class NSArray;
@protocol NSTextFinderClient, NSTextFinderBarContainer;

@interface NSTextFinder : NSObject <NSCoding> {
    id _client;
    id _content;
    id<NSTextFinderBarContainer> _container;
    unsigned long long _style;
    BOOL _incrementalEnabled;
}

@property id<NSTextFinderClient> client;
@property id<NSTextFinderBarContainer> findBarContainer;
@property BOOL findIndicatorNeedsUpdate;
@property (getter=isIncrementalSearchingEnabled) BOOL incrementalSearchingEnabled;
@property BOOL incrementalSearchingShouldDimContentView;
@property (readonly, copy) NSArray *incrementalMatchRanges;

+ (void)_findIndicatorNeedsUpdate:(id)a0;
+ (id)_globalTextFinder;
+ (id)_sharedPanelTextFinder;
+ (void)_beginActiveStyle:(long long)a0;
+ (void)_endActiveStyle;
+ (long long)activeStyle;
+ (id)_actionResponder;
+ (void)_setTextFinder:(id)a0 forView:(id)a1;
+ (id)_textFinderForView:(id)a0;
+ (void)_setFindIndicator:(id)a0 forView:(id)a1;
+ (id)_findIndicatorForView:(id)a0;
+ (void)_cancelFindIndicatorForView:(id)a0;
+ (void)drawIncrementalMatchHighlightInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)performAction:(long long)a0;
- (id)_textFinderForStyle:(long long)a0 create:(BOOL)a1;
- (long long)_defaultStyle;
- (id)_textFinderImplCreate:(BOOL)a0;
- (void)_invalidateTextFinders;
- (id)_barTextFinder;
- (void)setPreferredTextFinderStyle:(long long)a0;
- (long long)preferredTextFinderStyle;
- (BOOL)validateAction:(long long)a0;
- (id)_contentString;
- (void)_clearContentString;
- (void)_clearClientIfMatchingClient:(id)a0;
- (void)cancelFindIndicator;
- (void)noteClientStringWillChange;
- (void)setIsSearchingWebViews:(BOOL)a0;
- (BOOL)_isSearchingWebViews;
- (id)_webViews;
- (BOOL)_isSearchingAsynchronousDocument;

@end
