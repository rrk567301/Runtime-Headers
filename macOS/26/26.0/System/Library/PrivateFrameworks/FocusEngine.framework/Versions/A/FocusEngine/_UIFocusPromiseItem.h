@class NSString, NSArray;
@protocol UIFocusEnvironment, UIFocusItemContainer, UICoordinateSpace, UIFocusItem;

@interface _UIFocusPromiseItem : NSObject <UIFocusItemContainer, UIFocusItem> {
    struct { unsigned char didFulfillPromise : 1; } _flags;
}

@property (weak, nonatomic) id<UIFocusEnvironment> parentFocusEnvironment;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (copy, nonatomic) id /* block */ fulfillmentHandler;
@property (readonly, nonatomic) id<UIFocusItem> fulfilledItem;
@property (copy, nonatomic) NSString *debugIdentifier;
@property (readonly, nonatomic) id<UICoordinateSpace> coordinateSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL canBecomeFocused;
@property (readonly, nonatomic) long long focusGroupPriority;
@property (readonly, nonatomic) long long focusItemDeferralMode;
@property (readonly, nonatomic) BOOL isTransparentFocusItem;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, nonatomic) id<UIFocusItemContainer> focusItemContainer;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;

- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (BOOL)_isEligibleForFocusInteraction;
- (void).cxx_destruct;
- (BOOL)_isLazyFocusItemContainer;
- (void)didUpdateFocusInContext:(id)a0;
- (void)setNeedsFocusUpdate;
- (void)updateFocusIfNeeded;
- (id)initWithParentEnvironment:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fullfillmentHandler:(id /* block */)a2;

@end
