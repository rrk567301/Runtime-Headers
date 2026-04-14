@class NSString, EKCalendarViewController, NSPopover;
@protocol CalUICalendarInfoViewDelegate;

@interface CalUICalendarInfoViewController : NSViewController <NSPopoverDelegate, EKViewWindowControllerPrivate>

@property (retain) EKCalendarViewController *calendarViewController;
@property (retain) NSPopover *popover;
@property (weak) id<CalUICalendarInfoViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setCalendar:(id)a0;
- (id)view;
- (BOOL)popoverShouldClose:(id)a0;
- (void)popoverDidShow:(id)a0;
- (void)popoverWillClose:(id)a0;
- (void)popoverDidClose:(id)a0;
- (void)dismissPopover;
- (void)didCommitItem;
- (void)controllerCouldNotSaveWithError:(id)a0;
- (void)dismissPopoverNow;
- (void)showPopoverRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1 preferredEdge:(unsigned long long)a2;

@end
