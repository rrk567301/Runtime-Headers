@class CoreDAVLeafItem, NSString, ICSDocument, CoreDAVErrorItem, CoreDAVItemWithHrefChildItem;

@interface CalDAVScheduleResponseDetailsItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithHrefChildItem *recipientHREF;
@property (readonly, nonatomic) NSString *recipientString;
@property (retain, nonatomic) CoreDAVLeafItem *requestStatus;
@property (retain, nonatomic) ICSDocument *calendarData;
@property (retain, nonatomic) CoreDAVErrorItem *topLevelErrorItem;
@property (retain, nonatomic) NSString *responseDescription;

- (id)copyParseRules;
- (void).cxx_destruct;
- (id)description;
- (void)_setCalendarDataWithLeafItem:(id)a0;

@end
