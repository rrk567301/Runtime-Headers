@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAccessItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *accessLevel;

- (void).cxx_destruct;
- (id)init;
- (id)copyParseRules;
- (id)initWithAccess:(int)a0;

@end
