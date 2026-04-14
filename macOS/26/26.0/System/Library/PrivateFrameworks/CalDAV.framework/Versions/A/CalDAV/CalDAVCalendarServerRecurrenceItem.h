@class CoreDAVItemWithNoChildren, CoreDAVLeafItem, CalDAVCalendarServerChangesItem;

@interface CalDAVCalendarServerRecurrenceItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *master;
@property (retain, nonatomic) CoreDAVLeafItem *recurrenceID;
@property (retain, nonatomic) CalDAVCalendarServerChangesItem *changes;
@property (readonly, nonatomic) BOOL isMaster;

- (id)init;
- (id)copyParseRules;
- (void).cxx_destruct;

@end
