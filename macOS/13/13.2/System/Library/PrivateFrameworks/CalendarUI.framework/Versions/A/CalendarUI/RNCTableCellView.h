@class EKReminder, NSDictionary, RNCTextField, NSButton;
@protocol RNCTableCellViewController;

@interface RNCTableCellView : NSTableCellView

@property (retain) NSButton *checkBox;
@property (retain) RNCTextField *title;
@property (retain) RNCTextField *dueField;
@property (retain) NSDictionary *viewMetrics;
@property (weak) id<RNCTableCellViewController> controller;
@property (retain) EKReminder *reminder;

+ (id)sharedDateFormatter;
+ (id)sharedTodayDateFormatter;
+ (id)dateStringForReminder:(id)a0;
+ (id)remindMeTimeForReminder:(id)a0;
+ (id)alarmTimeForReminder:(id)a0;
+ (id)checkboxImageForColor:(id)a0 checked:(BOOL)a1;
+ (id)_checkboxTemplateUnchecked;
+ (id)_checkboxTemplateChecked;

- (void).cxx_destruct;
- (void)layout;
- (BOOL)wantsLayer;
- (void)checkBoxAction:(id)a0;
- (id)initWithReminder:(id)a0 controller:(id)a1 leftMargin:(double)a2;
- (void)updateWithReminder:(id)a0;
- (void)updateWithController:(id)a0;
- (void)_updateCheckboxWithCalendarColor:(id)a0;
- (void)addConstraints;

@end
