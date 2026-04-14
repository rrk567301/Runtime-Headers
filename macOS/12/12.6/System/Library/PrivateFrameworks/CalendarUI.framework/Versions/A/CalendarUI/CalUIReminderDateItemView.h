@class NSTextField, NSDate;

@interface CalUIReminderDateItemView : NSScrubberItemView

@property (readonly) NSDate *date;
@property (readonly) NSTextField *dateText;

+ (id)titleForDate:(id)a0;

- (void).cxx_destruct;
- (id)initWithDate:(id)a0;

@end
