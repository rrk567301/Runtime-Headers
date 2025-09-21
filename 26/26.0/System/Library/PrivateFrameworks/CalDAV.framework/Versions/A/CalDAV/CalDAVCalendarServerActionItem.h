@class CalDAVCalendarServerUpdateItem, CalDAVCalendarServerReplyItem, CoreDAVItemWithNoChildren, CalDAVCalendarServerCancelItem;

@interface CalDAVCalendarServerActionItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *create;
@property (retain, nonatomic) CalDAVCalendarServerUpdateItem *update;
@property (retain, nonatomic) CalDAVCalendarServerCancelItem *cancel;
@property (retain, nonatomic) CalDAVCalendarServerReplyItem *reply;

- (id)init;
- (id)copyParseRules;
- (void).cxx_destruct;

@end
