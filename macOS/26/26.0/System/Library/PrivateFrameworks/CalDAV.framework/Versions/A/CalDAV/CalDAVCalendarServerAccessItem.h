@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAccessItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *accessLevel;

- (id)init;
- (id)copyParseRules;
- (void).cxx_destruct;
- (id)initWithAccess:(int)a0;

@end
