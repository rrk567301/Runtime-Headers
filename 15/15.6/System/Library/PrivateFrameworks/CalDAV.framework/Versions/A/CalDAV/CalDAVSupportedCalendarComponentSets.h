@class NSMutableSet;

@interface CalDAVSupportedCalendarComponentSets : CoreDAVItem {
    NSMutableSet *_componentSets;
}

+ (char)allowedCalendars:(id)a0 contains:(id)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)childrenToWrite;
- (void)addCompSet:(id)a0;
- (id)componentsAsString;
- (id)copyParseRules;

@end
