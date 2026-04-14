@class EKEvent;

@interface WFCalendarEventContentItemChangeTransaction : WFCalendarItemContentItemChangeTransaction

@property (readonly, nonatomic) EKEvent *mutableEvent;

- (void)saveWithCompletionHandler:(id /* block */)a0 isNew:(BOOL)a1;

@end
