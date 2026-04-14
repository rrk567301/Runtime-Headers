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
- (void)setObject:(id)a0;
- (id)object;
- (void).cxx_destruct;
- (id)calendar;
- (id)view;
- (id)event;
- (id)item;
- (double)preferredWidth;
- (BOOL)isEditable;
- (void)updateConstraints;
- (BOOL)performDragOperation:(id)a0;
- (void)setNeedsUpdateConstraints:(BOOL)a0;
- (BOOL)hasContent;
- (BOOL)needsExpansion;
- (BOOL)isContainer;
- (double)maxHeight;
- (id)initWithViewController:(id)a0;
- (void)scrollToTop;
- (id)reminder;
- (BOOL)shouldDisplay;
- (BOOL)updateWithDiff:(id)a0;
- (BOOL)wantsAnimationSuppression;
- (id)enclosingGadgetContainer;
- (void)updateScrollState;
- (id)subItems;
- (void)animationDidFinish:(id)a0;
- (id)claimedPboardTypes;
- (void)savePendingChanges;
- (void)updateWithChanges:(id)a0;
- (void)saveCompleteChange;
- (void)savePartialChange;
- (void)mouseEnteredGadgetView;
- (void)mouseExitedGadgetView;
- (BOOL)isInProposedEventController;
- (void)setGadgetScrollsOutsideMainScrollArea:(BOOL)a0;
- (BOOL)isInterestedInChanges:(id)a0;
- (BOOL)adjustConstraintsInResponseToLayout;
- (id)timeZoneToDisplayIn;
- (void)_scrollViewFrameDidChange:(id)a0;
- (void)saveCompleteChangeWithoutPromptingUserAboutDecline;
- (void)scrollToBottom;
- (void)mouseDownInGadgetView;
- (void)mouseUpInGadgetView;
- (void)inspectorWindowWillClose;

@end
