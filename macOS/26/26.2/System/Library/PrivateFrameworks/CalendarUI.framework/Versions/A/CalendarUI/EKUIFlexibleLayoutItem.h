@class EKEvent, NSView, EKViewController, NSString;
@protocol EKUILayoutItem;

@interface EKUIFlexibleLayoutItem : EKUIGadget

@property (retain) NSView *view;
@property (weak) id<EKUILayoutItem> parentItem;
@property (weak) EKViewController *viewController;
@property (weak) EKEvent *event;
@property (copy) NSString *uuid;
@property (setter=setExpanded:) BOOL isExpanded;
@property (weak) NSView *firstKeyView;
@property (weak) NSView *lastKeyView;
@property (copy) id /* block */ shouldDisplayBlock;

+ (id)interestedChangeKeys;

- (BOOL)isEditable;
- (id)initWithViewController:(id)a0;
- (BOOL)isContainer;
- (void).cxx_destruct;
- (BOOL)needsExpansion;
- (BOOL)shouldDisplay;
- (BOOL)wantsAnimationSuppression;

@end
