@class CoreDAVItem, NSMutableSet;

@interface CalDAVCalendarServerResourceChangeUpdatedElement : CalDAVCalendarServerResourceChangeElement

@property (nonatomic) BOOL content;
@property (retain, nonatomic) CoreDAVItem *prop;
@property (retain, nonatomic) NSMutableSet *calendarChanges;

- (void)addCalendarChange:(id)a0;
- (void)addContentItem:(id)a0;
- (id)init;
- (id)copyParseRules;
- (void).cxx_destruct;

@end
