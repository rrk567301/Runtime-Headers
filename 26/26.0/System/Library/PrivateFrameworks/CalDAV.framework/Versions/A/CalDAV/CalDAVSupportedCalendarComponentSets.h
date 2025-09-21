@class NSMutableSet;

@interface CalDAVSupportedCalendarComponentSets : CoreDAVItem {
    NSMutableSet *_componentSets;
}

+ (BOOL)allowedCalendars:(id)a0 contains:(id)a1;

- (id)init;
- (id)description;
- (id)copyParseRules;
- (void).cxx_destruct;
- (id)childrenToWrite;
- (void)addCompSet:(id)a0;
- (id)componentsAsString;

@end
