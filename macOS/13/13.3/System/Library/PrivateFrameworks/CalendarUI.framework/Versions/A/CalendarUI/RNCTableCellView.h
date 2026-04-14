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
+ (id)_checkboxTemplateChecked;
+ (id)_checkboxTemplateUnchecked;
+ (id)alarmTimeForReminder:(id)a0;
+ (id)checkboxImageForColor:(id)a0 checked:(BOOL)a1;
+ (id)dateStringForReminder:(id)a0;
+ (id)remindMeTimeForReminder:(id)a0;
+ (id)sharedTodayDateFormatter;

- (void).cxx_destruct;
- (void)layout;
- (BOOL)wantsLayer;
- (void)checkBoxAction:(id)a0;
- (void)_updateCheckboxWithCalendarColor:(id)a0;
- (void)addConstraints;
- (id)initWithReminder:(id)a0 controller:(id)a1 leftMargin:(double)a2;
- (void)updateWithController:(id)a0;
- (void)updateWithReminder:(id)a0;

@end
