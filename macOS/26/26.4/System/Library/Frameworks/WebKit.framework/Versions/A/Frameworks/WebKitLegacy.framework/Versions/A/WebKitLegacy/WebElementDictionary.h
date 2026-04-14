@class NSMutableDictionary, NSMutableSet;

@interface WebElementDictionary : NSDictionary {
    void *_result;
    NSMutableDictionary *_cache;
    NSMutableSet *_nilValues;
    BOOL _cacheComplete;
}

+ (void)initialize;
+ (void)initializeLookupTable;

- (id)_image;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (id)keyEnumerator;
- (id)_title;
- (void)dealloc;
- (id)_imageRect;
- (id)_isSelected;
- (id)_targetWebFrame;
- (id)_absoluteLinkURL;
- (id)_domNode;
- (id)_absoluteImageURL;
- (id)_absoluteMediaURL;
- (id)_altDisplayString;
- (void)_fillCache;
- (id)_isContentEditable;
- (id)_isInScrollBar;
- (id)_isLiveLink;
- (id)_spellingToolTip;
- (id)_textContent;
- (id)_titleDisplayString;
- (id)_webFrame;
- (id)initWithHitTestResult:(const void *)a0;

@end
