@class CoreDAVItemWithNoChildren;

@interface CalDAVScheduleCalendarTranspItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *transparent;
@property (readonly, nonatomic) BOOL isScheduleTransparent;

- (id)copyParseRules;
- (void).cxx_destruct;
- (id)init;

@end
