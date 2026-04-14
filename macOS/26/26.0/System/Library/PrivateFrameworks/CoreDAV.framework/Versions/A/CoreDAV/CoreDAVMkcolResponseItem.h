@class NSMutableSet;

@interface CoreDAVMkcolResponseItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *propStats;

+ (id)copyParseRules;

- (void)addPropStat:(id)a0;
- (id)init;
- (id)description;
- (BOOL)hasPropertyError;
- (void).cxx_destruct;

@end
