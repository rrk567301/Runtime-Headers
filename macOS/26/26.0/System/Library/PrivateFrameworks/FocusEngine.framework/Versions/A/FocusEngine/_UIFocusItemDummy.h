@class NSArray, NSString;
@protocol UIFocusEnvironment, UIFocusItemContainer;

@interface _UIFocusItemDummy : NSObject <UIFocusItem>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (weak, nonatomic) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, nonatomic) BOOL canBecomeFocused;
@property (readonly, nonatomic) long long focusGroupPriority;
@property (readonly, nonatomic) long long focusItemDeferralMode;
@property (readonly, nonatomic) BOOL isTransparentFocusItem;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, nonatomic) id<UIFocusItemContainer> focusItemContainer;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0;
- (void)setNeedsFocusUpdate;
- (void)updateFocusIfNeeded;

@end
