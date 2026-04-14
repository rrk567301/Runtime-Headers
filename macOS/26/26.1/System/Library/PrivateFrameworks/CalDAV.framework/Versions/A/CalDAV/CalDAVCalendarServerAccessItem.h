@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAccessItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *accessLevel;

- (id)copyParseRules;
- (void).cxx_destruct;
- (id)init;
- (id)initWithAccess:(int)a0;

@end
