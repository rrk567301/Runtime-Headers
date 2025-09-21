@class EKUICompositeView, EKViewController, NSString;
@protocol EKUILayoutItem;

@interface EKUICompositeGadget : EKUIGadget {
    char _isExpanded;
}

@property (weak) EKViewController *viewController;
@property (setter=setExpanded:) char isExpanded;
@property (retain) EKUICompositeView *view;
@property (retain) NSString *uuid;
@property (weak) id<EKUILayoutItem> parentItem;

- (void).cxx_destruct;
- (void)setObject:(id)a0;
- (char)isEditable;
- (char)needsExpansion;
- (void)updateConstraints;
- (void)updateKeyViewLoop;
- (char)isContainer;
- (id)initWithViewController:(id)a0;
- (char)updateWithDiff:(id)a0;
- (void)enumerateSubitemsUsingBlock:(id /* block */)a0;
- (id)menuItemsForRecurrenceDifference;
- (unsigned long long)recurrenceDifferenceCount;
- (char)shouldDisplay;
- (id)subgadgets;
- (void)updateScrollState;
- (char)wantsAnimationSuppression;

@end
