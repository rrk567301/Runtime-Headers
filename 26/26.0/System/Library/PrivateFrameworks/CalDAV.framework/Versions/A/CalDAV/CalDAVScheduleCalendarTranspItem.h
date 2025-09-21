@class CoreDAVItemWithNoChildren;

@interface CalDAVScheduleCalendarTranspItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *transparent;
@property (readonly, nonatomic) BOOL isScheduleTransparent;

- (id)init;
- (id)copyParseRules;
- (void).cxx_destruct;

@end
