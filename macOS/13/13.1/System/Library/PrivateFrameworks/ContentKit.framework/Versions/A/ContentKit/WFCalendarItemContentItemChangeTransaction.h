@class EKCalendarItem, EKEventStore;

@interface WFCalendarItemContentItemChangeTransaction : WFContentItemChangeTransaction

@property (readonly, nonatomic) EKCalendarItem *mutableEvent;
@property (readonly, nonatomic) EKEventStore *eventStore;

- (void).cxx_destruct;
- (void)removeAllAttachments;
- (void)addAttachments:(id)a0;
- (id)initWithContentItem:(id)a0 eventStore:(id)a1;
- (void)updateAttachments:(id)a0;

@end
