@class CoreDAVLeafItem, CalDAVCalendarServerActionItem;

@interface CalDAVCalendarServerScheduleChangesItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVLeafItem *dtstamp;
@property (retain, nonatomic) CalDAVCalendarServerActionItem *action;

- (id)init;
- (id)copyParseRules;
- (void).cxx_destruct;

@end
