@class NSMutableSet;

@interface CoreDAVCalendarServerPushTransportsItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *transports;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (void)addTransport:(id)a0;
- (id)init;
- (id)description;

@end
