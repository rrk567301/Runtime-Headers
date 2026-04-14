@class NSMutableSet;

@interface CoreDAVCalendarServerPushTransportsItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *transports;

+ (id)copyParseRules;

- (id)description;
- (void).cxx_destruct;
- (void)addTransport:(id)a0;
- (id)init;

@end
