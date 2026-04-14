@class CoreDAVLeafItem, CoreDAVItem;

@interface CalDAVCalendarServerNotificationItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVLeafItem *dtstamp;
@property (retain, nonatomic) CoreDAVItem *content;

- (id)copyParseRules;
- (void).cxx_destruct;
- (id)init;

@end
