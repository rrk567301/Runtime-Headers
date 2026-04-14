@class CoreDAVItem, NSMutableSet;

@interface CalDAVCalendarServerResourceChangeUpdatedElement : CalDAVCalendarServerResourceChangeElement

@property (nonatomic) BOOL content;
@property (retain, nonatomic) CoreDAVItem *prop;
@property (retain, nonatomic) NSMutableSet *calendarChanges;

- (id)copyParseRules;
- (void)addContentItem:(id)a0;
- (void).cxx_destruct;
- (void)addCalendarChange:(id)a0;
- (id)init;

@end
