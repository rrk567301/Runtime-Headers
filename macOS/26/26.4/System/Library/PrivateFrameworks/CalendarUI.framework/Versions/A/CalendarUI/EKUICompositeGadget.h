@class EKUICompositeView, EKViewController, NSString;
@protocol EKUILayoutItem;

@interface EKUICompositeGadget : EKUIGadget {
    BOOL _isExpanded;
}

@property (weak) EKViewController *viewController;
@property (setter=setExpanded:) BOOL isExpanded;
@property (retain) EKUICompositeView *view;
@property (retain) NSString *uuid;
@property (weak) id<EKUILayoutItem> parentItem;

- (BOOL)isEditable;
- (BOOL)isContainer;
- (id)initWithViewController:(id)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)setObject:(id)a0;
- (BOOL)needsExpansion;
- (void)updateKeyViewLoop;
- (BOOL)updateWithDiff:(id)a0;
- (void)enumerateSubitemsUsingBlock:(id /* block */)a0;
- (id)menuItemsForRecurrenceDifference;
- (unsigned long long)recurrenceDifferenceCount;
- (BOOL)shouldDisplay;
- (id)subgadgets;
- (void)updateScrollState;
- (BOOL)wantsAnimationSuppression;

@end
