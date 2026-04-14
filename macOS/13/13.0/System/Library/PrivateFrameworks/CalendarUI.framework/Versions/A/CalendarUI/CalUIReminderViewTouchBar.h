@class NSTouchBar, NSString, NSPopoverTouchBarItem, EKReminder, NSCustomTouchBarItem, NSGroupTouchBarItem, NSButton, CalUIReminderDatePickerTouchBar, CalUIGadgetViewTouchBar;
@protocol CalUIReminderViewTouchBarDelegate;

@interface CalUIReminderViewTouchBar : NSObject <CalUIReminderDatePickerTouchBarDelegate, NSTouchBarProvider>

@property (weak) id<CalUIReminderViewTouchBarDelegate> delegate;
@property (retain) NSTouchBar *touchBar;
@property (retain) NSCustomTouchBarItem *doneButtonTouchBarItem;
@property (retain) NSButton *reminderNewButton;
@property (retain) NSButton *reminderCompleteButton;
@property (retain) NSButton *reminderInspectorButton;
@property (retain) NSGroupTouchBarItem *inspectorFieldsTouchBarItem;
@property (retain) NSPopoverTouchBarItem *reminderTimePopoverTouchBarItem;
@property (retain) NSPopoverTouchBarItem *locationPopoverTouchBarItem;
@property (retain) CalUIReminderDatePickerTouchBar *datePickerTouchBar;
@property (retain) CalUIGadgetViewTouchBar *datePickerGadgetViewTouchBar;
@property (retain) CalUIGadgetViewTouchBar *locationGadgetViewTouchBar;
@property (retain) NSButton *timeButton;
@property (retain) NSButton *locationButton;
@property (retain, nonatomic) EKReminder *reminder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)updateTouchBar;
- (void)_updateTouchBarIdentifiers;
- (id)createDatePickerTouchBar;
- (id)createReminderNewButton;
- (id)createReminderCompleteButton;
- (id)createReminderInspectorButton;
- (id)createDatePickerGadgetViewTouchBar;
- (id)createLocationGadgetViewTouchBar;
- (id)createInspectorFieldsTouchBarItem;
- (void)updateReminderNew:(BOOL)a0;
- (void)updateReminderCompletion:(BOOL)a0;
- (void)showDateTimePopover;
- (void)showLocationPopover;
- (void)dismissAllPopovers;

@end
