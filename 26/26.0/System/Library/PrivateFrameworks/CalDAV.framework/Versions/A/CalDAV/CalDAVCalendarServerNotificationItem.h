@class CoreDAVLeafItem, CoreDAVItem;

@interface CalDAVCalendarServerNotificationItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVLeafItem *dtstamp;
@property (retain, nonatomic) CoreDAVItem *content;

- (id)init;
- (id)copyParseRules;
- (void).cxx_destruct;

@end
