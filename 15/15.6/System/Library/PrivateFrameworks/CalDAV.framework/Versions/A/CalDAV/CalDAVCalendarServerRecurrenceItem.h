@class CoreDAVItemWithNoChildren, CoreDAVLeafItem, CalDAVCalendarServerChangesItem;

@interface CalDAVCalendarServerRecurrenceItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *master;
@property (retain, nonatomic) CoreDAVLeafItem *recurrenceID;
@property (retain, nonatomic) CalDAVCalendarServerChangesItem *changes;
@property (readonly, nonatomic) char isMaster;

- (id)init;
- (void).cxx_destruct;
- (id)copyParseRules;

@end
