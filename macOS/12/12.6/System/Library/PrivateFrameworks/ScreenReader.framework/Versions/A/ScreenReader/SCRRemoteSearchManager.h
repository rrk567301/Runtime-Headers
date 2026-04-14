@class NSString, SCRElement, SCRChooserItemResult;

@interface SCRRemoteSearchManager : NSObject

@property (retain, nonatomic) SCRElement *containerElement;
@property (nonatomic) long long searchKey;
@property (copy, nonatomic) NSString *searchText;
@property (retain, nonatomic) SCRChooserItemResult *nextStartResult;
@property (retain, nonatomic) SCRChooserItemResult *prevStartResult;

+ (BOOL)elementSupportsSearch:(id)a0;
+ (BOOL)uiElementSupportsSearch:(id)a0;
+ (id)unpromotableUIDescendantElementForUIElement:(id)a0;
+ (id)resultsWithSearchKeys:(id)a0 containerElement:(id)a1 searchDirection:(long long)a2 limit:(unsigned long long)a3 startResult:(id)a4 searchText:(id)a5 immediateDescendantsOnly:(BOOL)a6;
+ (id)navigableElementForElement:(id)a0 containerElement:(id)a1;
+ (id)uiChildElementsForSearchDirection:(long long)a0 containerElement:(id)a1 uiStartElement:(id)a2 limit:(long long)a3;
+ (id)allResultsWithSearchKey:(long long)a0 containerElement:(id)a1;
+ (id)uiChildElementWithPredicate:(id /* block */)a0 containerElement:(id)a1 maxItem:(unsigned long long)a2 batchSize:(unsigned long long)a3;
+ (id)uiChildElementForSearchDirection:(long long)a0 containerElement:(id)a1 uiStartElement:(id)a2;
+ (id)uiContainerElementForUIElement:(id)a0;

- (void).cxx_destruct;
- (id)nextResultsWithLimit:(unsigned long long)a0;
- (id)nextResult;
- (id)nextNavigableResult;
- (id)initWithSearchKey:(long long)a0 containerElement:(id)a1 startResult:(id)a2 searchText:(id)a3;
- (id)prevResultsWithLimit:(unsigned long long)a0;
- (id)_axSearchKeysForSCRSearchKeys:(id)a0;
- (id)_resultsWithSearchKeys:(id)a0 containerElement:(id)a1 searchDirection:(id)a2 limit:(id)a3 startResult:(id)a4 searchText:(id)a5 immediateDescendantsOnly:(id)a6;
- (struct __CFString { } *)_axSearchKeyForSCRSearchKey:(long long)a0;
- (id)_startResultForSearchDirection:(long long)a0;
- (id)prevResult;
- (void)_updateStartElementsWithResults:(id)a0;
- (id)_uiElementsForAXElements:(id)a0;
- (id)_resultsWithSearchDirection:(long long)a0 limit:(unsigned long long)a1;
- (id)_navigableElementForSearchDirection:(long long)a0;
- (id)prevNavigableResult;

@end
