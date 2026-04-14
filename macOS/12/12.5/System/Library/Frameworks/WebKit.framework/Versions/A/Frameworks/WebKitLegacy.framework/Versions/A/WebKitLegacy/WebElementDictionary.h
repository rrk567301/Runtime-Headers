@class NSMutableDictionary, NSMutableSet;

@interface WebElementDictionary : NSDictionary {
    void *_result;
    NSMutableDictionary *_cache;
    NSMutableSet *_nilValues;
    BOOL _cacheComplete;
}

+ (void)initialize;
+ (void)initializeLookupTable;

- (void)dealloc;
- (unsigned long long)count;
- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (id)_image;
- (id)_title;
- (id)_imageRect;
- (id)_isSelected;
- (id)initWithHitTestResult:(const void *)a0;
- (id)_domNode;
- (id)_webFrame;
- (id)_altDisplayString;
- (id)_absoluteImageURL;
- (id)_absoluteMediaURL;
- (id)_spellingToolTip;
- (id)_absoluteLinkURL;
- (id)_targetWebFrame;
- (id)_titleDisplayString;
- (id)_textContent;
- (id)_isLiveLink;
- (id)_isContentEditable;
- (id)_isInScrollBar;
- (void)_fillCache;

@end
