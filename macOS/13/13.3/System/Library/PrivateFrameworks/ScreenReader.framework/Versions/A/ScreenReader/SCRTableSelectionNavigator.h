@class SCRUIElement, NSArray, SCRTable, NSString;

@interface SCRTableSelectionNavigator : NSObject <SCRBrailleLineNavigator>

@property (retain, nonatomic) SCRTable *elementProvider;
@property (retain, nonatomic) SCRUIElement *_focusedElement;
@property (nonatomic) unsigned long long _focusedElementIndex;
@property (retain, nonatomic) NSArray *_currentlySelectedUIElements;
@property (retain, nonatomic) NSArray *_lastBrailleLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateNavigatorForElement:(id)a0;
+ (id)lineNavigatorForElement:(id)a0;

- (void).cxx_destruct;
- (id)initWithTable:(id)a0;
- (id)_rowUIElementForTableElement:(id)a0;
- (void)addLineToRequest:(id)a0 lineFocus:(int)a1;
- (BOOL)currentLineContainsUIElement:(id)a0;
- (BOOL)moveToLineForElement:(id)a0 WithInfo:(id)a1;
- (id)navigationProvider;
- (BOOL)navigationProviderMatchesElement:(id)a0;
- (BOOL)panLineWithDirection:(unsigned long long)a0;

@end
