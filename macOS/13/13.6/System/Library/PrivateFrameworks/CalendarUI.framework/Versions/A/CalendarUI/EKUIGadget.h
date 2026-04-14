@class EKUIGadgetScrollView, NSView, EKViewController, NSString, NSLayoutConstraint;
@protocol EKUILayoutItem;

@interface EKUIGadget : NSObject <EKUILayoutItem>

@property (weak) id<EKUILayoutItem> parentItem;
@property (weak, nonatomic) NSView *firstKeyView;
@property (weak, nonatomic) NSView *lastKeyView;
@property (retain) EKUIGadgetScrollView *scrollView;
@property (setter=setExpanded:) BOOL isExpanded;
@property (weak) EKViewController *viewController;
@property (retain) NSString *uuid;
@property BOOL isVisible;
@property BOOL shouldScrollToTop;
@property BOOL constrainedForRequiredContentHeight;
@property (retain) NSLayoutConstraint *scrollContentHeightConstraint;
@property (retain) NSLayoutConstraint *scrollViewMaxHeightConstraint;
@property BOOL isScrolling;
@property BOOL scrollsOutsideMainScrollArea;
@property (retain) NSView *gadgetView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interestedChangeKeys;

- (void)dealloc;
- (void).cxx_destruct;
- (id)calendar;
- (id)object;
- (void)setObject:(id)a0;
- (id)view;
- (id)event;
- (id)item;
- (id)accessibilityIdentifier;
- (BOOL)hasContent;
- (id)initWithViewController:(id)a0;
- (BOOL)isEditable;
- (BOOL)needsExpansion;
- (BOOL)performDragOperation:(id)a0;
- (double)preferredWidth;
- (void)setNeedsUpdateConstraints:(BOOL)a0;
- (void)updateConstraints;
- (BOOL)isContainer;
- (double)maxHeight;
- (void)scrollToTop;
- (id)reminder;
- (BOOL)updateWithDiff:(id)a0;
- (void)viewControllerViewWillDisappear;
- (void)_scrollViewFrameDidChange:(id)a0;
- (BOOL)adjustConstraintsInResponseToLayout;
- (void)animationDidFinish:(id)a0;
- (id)claimedPboardTypes;
- (id)enclosingGadgetContainer;
- (void)inspectorWindowWillClose;
- (BOOL)isInProposedEventController;
- (BOOL)isInterestedInChanges:(id)a0;
- (void)mouseDownInGadgetView;
- (void)mouseEnteredGadgetView;
- (void)mouseExitedGadgetView;
- (void)mouseUpInGadgetView;
- (void)saveCompleteChange;
- (void)saveCompleteChangeWithoutPromptingUserAboutDecline;
- (void)savePartialChange;
- (void)savePendingChanges;
- (void)scrollToBottom;
- (void)setGadgetScrollsOutsideMainScrollArea:(BOOL)a0;
- (BOOL)shouldDisplay;
- (id)subItems;
- (id)timeZoneToDisplayIn;
- (void)updateScrollState;
- (void)updateWithChanges:(id)a0;
- (void)viewControllerViewDidAppear;
- (void)viewControllerViewDidDisappear;
- (void)viewControllerViewWillAppear;
- (BOOL)wantsAnimationSuppression;

@end
