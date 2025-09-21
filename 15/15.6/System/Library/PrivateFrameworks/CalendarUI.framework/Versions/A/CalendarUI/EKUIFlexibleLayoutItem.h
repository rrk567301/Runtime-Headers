@class EKEvent, NSView, EKViewController, NSString;
@protocol EKUILayoutItem;

@interface EKUIFlexibleLayoutItem : EKUIGadget

@property (retain) NSView *view;
@property (weak) id<EKUILayoutItem> parentItem;
@property (weak) EKViewController *viewController;
@property (weak) EKEvent *event;
@property (copy) NSString *uuid;
@property (setter=setExpanded:) char isExpanded;
@property (weak) NSView *firstKeyView;
@property (weak) NSView *lastKeyView;
@property (copy) id /* block */ shouldDisplayBlock;

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (char)isEditable;
- (char)needsExpansion;
- (char)isContainer;
- (id)initWithViewController:(id)a0;
- (char)shouldDisplay;
- (char)wantsAnimationSuppression;

@end
