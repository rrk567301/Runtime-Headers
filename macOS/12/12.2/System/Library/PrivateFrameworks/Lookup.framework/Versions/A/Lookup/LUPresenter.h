@class NSString, LUSearchTermIndicator, NSAttributedString, NSPopover;

@interface LUPresenter : NSObject <NSPopoverDelegate, DDActionsManagerDelegateProtocol>

@property (retain, nonatomic) LUSearchTermIndicator *searchTermIndicator;
@property (retain, nonatomic) NSPopover *resultsPopover;
@property (retain, nonatomic) NSAttributedString *displayedTerm;
@property (nonatomic) struct CGPoint { double x; double y; } displayedTermOrigin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animationControllerForTerm:(id)a0 relativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 options:(id)a3;
+ (void)positioningView:(id *)a0 andRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 forTerm:(id)a2 atLocation:(struct CGPoint { double x0; double x1; })a3 options:(id)a4;
+ (id)sharedPresenter;
+ (id)windowAtScreenLocation:(struct CGPoint { double x0; double x1; })a0;
+ (BOOL)windowIsMain:(id)a0;
+ (BOOL)windowIsKey:(id)a0;
+ (BOOL)windowIsPopover:(id)a0;
+ (id)addressInString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)animationControllerForTerm:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1 positioningView:(id)a2 options:(id)a3;
+ (id)animationControllerForTerm:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1 options:(id)a2;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)popoverWillShow:(id)a0;
- (void)popoverDidShow:(id)a0;
- (void)popoverWillClose:(id)a0;
- (void)popoverDidClose:(id)a0;
- (void)showDefinitionForTerm:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1 options:(id)a2;
- (void)hideDefinition;
- (void)dataDetectorsUIActionDidEnd;
- (void)dataDetectorsUIActionWillStart;
- (void)commonLUPresenterTeardown;
- (void)postPopoverWillCloseNotification;
- (id)animationControllerForTerm:(id)a0 relativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 options:(id)a3;
- (void)showDefinitionForTerm:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1 positioningView:(id)a2 options:(id)a3;
- (void)showDefinitionForTerm:(id)a0 relativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 options:(id)a3;
- (unsigned long long)preferredEdgeOfPopover:(id)a0 relativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2;
- (void)implicitHideDefinition;
- (id)resultsViewController;

@end
