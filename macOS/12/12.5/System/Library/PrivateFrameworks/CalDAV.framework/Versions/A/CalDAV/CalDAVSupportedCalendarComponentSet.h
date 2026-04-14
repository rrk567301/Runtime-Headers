@class NSSet, NSMutableSet;

@interface CalDAVSupportedCalendarComponentSet : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *comps;
@property (readonly, nonatomic) NSSet *compNames;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)componentsAsString;
- (void)addComp:(id)a0;
- (id)copyParseRules;
- (id)childrenToWrite;

@end
