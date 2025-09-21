@class CoreDAVItemWithNoChildren;

@interface CalDAVScheduleCalendarTranspItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *transparent;
@property (readonly, nonatomic) char isScheduleTransparent;

- (id)init;
- (void).cxx_destruct;
- (id)copyParseRules;

@end
