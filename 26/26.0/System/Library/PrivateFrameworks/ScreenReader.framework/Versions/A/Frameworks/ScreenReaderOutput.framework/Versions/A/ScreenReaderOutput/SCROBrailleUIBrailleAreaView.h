@class NSString;

@interface SCROBrailleUIBrailleAreaView : SCROBrailleUIView

@property (retain, nonatomic) NSString *initialContent;
@property (nonatomic) long long initialCursor;
@property (nonatomic) long long initialSelectionLength;
@property (nonatomic) BOOL showingBackButton;
@property (retain, nonatomic) NSString *valueCache;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectionCache;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } focusCache;
@property (nonatomic) BOOL isReadOnly;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selection;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } focus;

- (id)handleEvent:(id)a0;
- (id)value;
- (void)display;
- (void).cxx_destruct;
- (id)_backButtonHandleEvent:(id)a0;
- (id)_brailleForBackButton;
- (id)_contentHandleEvent:(id)a0;
- (void)_copySelectedBrailleAndErase:(BOOL)a0;
- (void)handleFindForSearchBraille:(id)a0;
- (void)handlePreviousFindForSearchBraille:(id)a0;
- (id)initWithIdentifier:(id)a0 initialContent:(id)a1 initialCursor:(long long)a2;
- (void)loadContent:(id)a0 cursor:(long long)a1;
- (void)moveFocusTo:(long long)a0;
- (id)visualRepresentation;

@end
