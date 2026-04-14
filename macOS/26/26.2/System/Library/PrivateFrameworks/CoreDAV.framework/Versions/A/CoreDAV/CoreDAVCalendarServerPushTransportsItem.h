@class NSMutableSet;

@interface CoreDAVCalendarServerPushTransportsItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *transports;

+ (id)copyParseRules;

- (void)addTransport:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
