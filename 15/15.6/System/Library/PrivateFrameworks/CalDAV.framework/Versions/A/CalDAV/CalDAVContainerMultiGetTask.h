@interface CalDAVContainerMultiGetTask : CoreDAVContainerMultiGetTask

@property (nonatomic) char getScheduleTags;
@property (nonatomic) char getScheduleChanges;

- (id)initWithURLs:(id)a0 atContainerURL:(id)a1 getScheduleTags:(char)a2 getScheduleChanges:(char)a3;
- (id)copyAdditionalPropElements;
- (id)initWithURLs:(id)a0 atContainerURL:(id)a1 getScheduleTags:(char)a2 getScheduleChanges:(char)a3 appSpecificCalendarItemClass:(Class)a4;
- (void)setAdditionalProperties:(id)a0 onDataItem:(id)a1;

@end
