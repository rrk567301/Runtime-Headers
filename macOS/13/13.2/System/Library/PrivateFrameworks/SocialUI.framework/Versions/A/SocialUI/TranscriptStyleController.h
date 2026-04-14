@class DOMDocument, NSString, DOMHTMLHeadElement, DOMCSSStyleSheet, WebView, BuddyCSSProvider, NSMutableSet, DOMCSSMediaRule, DOMHTMLBodyElement, NSMutableDictionary, NSMutableArray;

@interface TranscriptStyleController : NSObject <DOMNodeFilter> {
    DOMCSSMediaRule *_2xRules;
    NSMutableSet *_dirtyCSSRules;
    NSMutableDictionary *_cssCache;
    NSMutableArray *_cssCacheOrder;
    NSMutableDictionary *_cssRuleMap;
    NSMutableDictionary *_2xRuleMap;
    unsigned int _changeCount;
    int _inBatchViewChangeCount;
    BOOL _batchChangeRequiresRebuild;
    BOOL _watchMessageAddressing;
    BOOL _messageContentIsHidden;
}

@property BOOL requiresCSSRebuild;
@property (nonatomic) BuddyCSSProvider *buddyCSSProvider;
@property (nonatomic) WebView *webView;
@property (retain, nonatomic) DOMDocument *DOM;
@property (retain, nonatomic) DOMHTMLHeadElement *head;
@property (readonly, retain, nonatomic) DOMHTMLBodyElement *body;
@property (retain, nonatomic) DOMCSSStyleSheet *DOMCSSStyleSheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cssFilePath;
+ (id)scriptFileURLs;

- (void)dealloc;
- (int)changeCount;
- (void).cxx_destruct;
- (id)window;
- (void)clear;
- (short)acceptNode:(id)a0;
- (id)initWithWebView:(id)a0;
- (void)_applyChanges;
- (void)beginChanges;
- (void)endChanges;
- (void)showNamesAndPictures;
- (void)showPictures;
- (id)DOMCSSStyleSheet;
- (id)_styleElement;
- (void)_rebuildCSSRuleMap;
- (BOOL)_rebuildCSSContent;
- (void)applyCurrentChanges;
- (void)setDOMCSSRule:(id)a0 forSelector:(id)a1;
- (void)setDOM2XMediaRule:(id)a0 forSelector:(id)a1;
- (id)DOMCSSRuleForSelector:(id)a0;
- (id)DOM2XMediaRuleForSelector:(id)a0;
- (BOOL)_applyQueuedCSSRules;
- (BOOL)applyCSSSelector:(id)a0 property:(id)a1 value:(id)a2 priority:(id)a3;
- (BOOL)applyCSSSelector:(id)a0 property:(id)a1 value:(id)a2;
- (BOOL)applyCSSSelector:(id)a0 fromDictionary:(id)a1;
- (void)clearCSSSelector:(id)a0;
- (void)clearCSSSelector:(id)a0 forProperties:(id)a1;
- (void)_setNeedsRebuild;
- (void)beginBatchViewChange;
- (BOOL)endBatchViewChange;
- (void)dimTranscriptWithAnimation:(BOOL)a0;
- (void)undimTranscriptWithAnimation:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenBoundsForElement:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenBoundsForElementID:(id)a0;
- (void)bodyFinishLayout;
- (void)applyRulesForChatItem:(id)a0;
- (void)personInfoChanged:(id)a0;
- (void)personPictureChanged:(id)a0;
- (id)chatItemGUIDs;
- (double)minHeightPerMessage;

@end
