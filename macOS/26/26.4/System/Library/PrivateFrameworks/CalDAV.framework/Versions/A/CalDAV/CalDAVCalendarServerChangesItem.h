@class NSMutableSet;

@interface CalDAVCalendarServerChangesItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *changedProperties;

- (id)copyParseRules;
- (void).cxx_destruct;
- (id)init;
- (void)addChangedProperty:(id)a0;
- (id)initWithNameSpace:(id)a0 andName:(id)a1;

@end
