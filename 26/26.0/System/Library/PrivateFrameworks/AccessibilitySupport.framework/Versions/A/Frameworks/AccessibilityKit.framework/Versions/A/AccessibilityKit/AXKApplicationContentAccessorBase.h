@class NSArray, AXFUIElement, NSString;

@interface AXKApplicationContentAccessorBase : NSObject <AXKReadAllOperations>

@property (retain, nonatomic) AXFUIElement *applicationElement;
@property (retain, nonatomic) AXFUIElement *window;
@property (retain, nonatomic) AXFUIElement *pageElement;
@property (retain, nonatomic) AXFUIElement *currentReadingElement;
@property (retain, nonatomic) AXFUIElement *nextPageElement;
@property (readonly, copy, nonatomic) NSArray *allPageElements;
@property (readonly, copy, nonatomic) NSArray *allVisiblePageElements;
@property (readonly, copy, nonatomic) NSArray *pagesAroundVisiblePage;
@property (retain, nonatomic) AXFUIElement *readingElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWindow:(id)a0;
- (void).cxx_destruct;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_readableDescendantsForElement:(id)a0;
- (id)pageElementRole;
- (long long)_indexOfElement:(id)a0 inArray:(id)a1;
- (id)_pageElementForElement:(id)a0;
- (id)_pageReadableElements;
- (BOOL)_possiblePageElement:(id)a0;
- (void)_readableDescendantForElement:(id)a0 visitedElements:(id)a1;
- (id)allVisiblePage;
- (id)elementAtIndex:(unsigned long long)a0 inArray:(id)a1;
- (id)focusElement;
- (unsigned long long)indexOfElementInArray:(id)a0 containingDescendant:(id)a1;
- (id)nextElementToRead;
- (id)pageElementSubrole;
- (id)previousElementToRead;
- (BOOL)scrollElementToVisible:(id)a0;
- (BOOL)turnPageInDirection:(BOOL)a0;
- (void)updatePageElement;

@end
