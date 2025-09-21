@class NSOrderedSet, SCRElement, NSSet, NSMutableDictionary;

@interface SCRBrailleLineManager : NSObject

@property (weak, nonatomic) SCRElement *_containerElement;
@property (nonatomic) long long _focusedElementIndex;
@property (nonatomic) char _lineNeedsRefresh;
@property (retain, nonatomic) NSOrderedSet *_orderedLine;
@property (copy, nonatomic) NSSet *_retainedElements;
@property (retain, nonatomic) NSMutableDictionary *_uiElementToElementDict;
@property (nonatomic) char focusThrough;
@property (nonatomic) int lineFocus;

- (void).cxx_destruct;
- (id)_focusedElement;
- (void)_addDescriptionForElement:(id)a0 request:(id)a1 focused:(char)a2 useTextLine:(char)a3;
- (id)_deepestFocusedThroughElement;
- (char)_elementSupportsContainerSummary:(id)a0;
- (id)buildBrailleLineRequestAndUpdateFocusedLine;
- (id)initWithContainerElement:(id)a0;
- (char)isLineEqualToUIElements:(id)a0;
- (char)isLineValid;
- (void)setBrailleLineNeedsRebuild;
- (char)setFocusedElement:(id)a0;
- (void)setLine:(id)a0 focusedElement:(id)a1 retainedElements:(id)a2;

@end
