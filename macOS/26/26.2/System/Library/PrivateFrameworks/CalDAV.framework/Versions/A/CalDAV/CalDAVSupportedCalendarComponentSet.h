@class NSSet, NSMutableSet;

@interface CalDAVSupportedCalendarComponentSet : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *comps;
@property (readonly, nonatomic) NSSet *compNames;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)copyParseRules;
- (id)childrenToWrite;
- (void)addComp:(id)a0;
- (id)componentsAsString;

@end
