@class NSMutableSet;

@interface CalDAVSupportedCalendarComponentSets : CoreDAVItem {
    NSMutableSet *_componentSets;
}

+ (BOOL)allowedCalendars:(id)a0 contains:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)copyParseRules;
- (id)childrenToWrite;
- (void)addCompSet:(id)a0;
- (id)componentsAsString;

@end
