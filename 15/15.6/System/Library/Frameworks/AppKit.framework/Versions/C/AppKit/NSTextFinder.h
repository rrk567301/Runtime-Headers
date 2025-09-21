@class NSArray;
@protocol NSTextFinderClient, NSTextFinderBarContainer;

@interface NSTextFinder : NSObject <NSCoding> {
    id _client;
    id _content;
    id<NSTextFinderBarContainer> _container;
    unsigned long long _style;
    char _incrementalEnabled;
}

@property id<NSTextFinderClient> client;
@property id<NSTextFinderBarContainer> findBarContainer;
@property char findIndicatorNeedsUpdate;
@property (getter=isIncrementalSearchingEnabled) char incrementalSearchingEnabled;
@property char incrementalSearchingShouldDimContentView;
@property (readonly, copy) NSArray *incrementalMatchRanges;

+ (void)_endActiveStyle;
+ (id)_actionResponder;
+ (void)_beginActiveStyle:(long long)a0;
+ (void)_cancelFindIndicatorForView:(id)a0;
+ (id)_findIndicatorForView:(id)a0;
+ (void)_findIndicatorNeedsUpdate:(id)a0;
+ (id)_globalTextFinder;
+ (void)_setFindIndicator:(id)a0 forView:(id)a1;
+ (void)_setTextFinder:(id)a0 forView:(id)a1;
+ (id)_sharedPanelTextFinder;
+ (id)_textFinderForView:(id)a0;
+ (long long)activeStyle;
+ (void)drawIncrementalMatchHighlightInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)performAction:(long long)a0;
- (char)validateAction:(long long)a0;
- (id)_barTextFinder;
- (void)_clearClientIfMatchingClient:(id)a0;
- (void)_clearContentString;
- (char)_clientSupportsFullWordOption;
- (char)_clientSupportsPatternOption;
- (id)_contentString;
- (long long)_defaultStyle;
- (void)_invalidateTextFinders;
- (char)_isSearchingAsynchronousDocument;
- (char)_isSearchingWebViews;
- (char)_supportsIncludeAttachmentsOption;
- (id)_textFinderForStyle:(long long)a0 create:(char)a1;
- (id)_textFinderImplCreate:(char)a0;
- (id)_webViews;
- (void)cancelFindIndicator;
- (void)noteClientStringWillChange;
- (long long)preferredTextFinderStyle;
- (void)setIsSearchingWebViews:(char)a0;
- (void)setPreferredTextFinderStyle:(long long)a0;
- (void)setSupportsIncludeAttachmentsOption:(char)a0;

@end
