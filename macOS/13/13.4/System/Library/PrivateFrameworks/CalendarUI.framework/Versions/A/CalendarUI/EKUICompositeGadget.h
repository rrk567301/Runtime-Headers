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

- (void).cxx_destruct;
- (void)setObject:(id)a0;
- (id)initWithViewController:(id)a0;
- (BOOL)isEditable;
- (BOOL)needsExpansion;
- (void)updateConstraints;
- (void)updateKeyViewLoop;
- (BOOL)isContainer;
- (BOOL)updateWithDiff:(id)a0;
- (void)enumerateSubitemsUsingBlock:(id /* block */)a0;
- (BOOL)shouldDisplay;
- (id)subgadgets;
- (void)updateScrollState;
- (BOOL)wantsAnimationSuppression;

@end
