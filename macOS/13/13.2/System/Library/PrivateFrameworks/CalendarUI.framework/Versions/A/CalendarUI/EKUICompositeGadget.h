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

- (void)setObject:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (BOOL)isEditable;
- (id)initWithViewController:(id)a0;
- (BOOL)needsExpansion;
- (void)updateKeyViewLoop;
- (BOOL)isContainer;
- (BOOL)shouldDisplay;
- (BOOL)updateWithDiff:(id)a0;
- (BOOL)wantsAnimationSuppression;
- (void)updateScrollState;
- (void)enumerateSubitemsUsingBlock:(id /* block */)a0;
- (id)subgadgets;

@end
