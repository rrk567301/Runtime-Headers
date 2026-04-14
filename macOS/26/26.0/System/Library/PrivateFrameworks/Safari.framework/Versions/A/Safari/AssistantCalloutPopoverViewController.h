@class AssistantCalloutPopoverView;
@protocol AssistantCalloutPopoverViewControllerDelegate;

@interface AssistantCalloutPopoverViewController : NSViewController {
    AssistantCalloutPopoverView *_calloutPopoverView;
}

@property (weak, nonatomic) id<AssistantCalloutPopoverViewControllerDelegate> delegate;
@property (copy, nonatomic) id /* block */ assistantCalloutPopoverAction;

- (void)loadView;
- (void).cxx_destruct;
- (void)calloutWasClicked;
- (void)setTitle:(id)a0 withSymbol:(id)a1;

@end
