@class NSSet, NSMutableSet;

@interface CalDAVSupportedCalendarComponentSet : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *comps;
@property (readonly, nonatomic) NSSet *compNames;

- (id)copyParseRules;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)childrenToWrite;
- (void)addComp:(id)a0;
- (id)componentsAsString;

@end
