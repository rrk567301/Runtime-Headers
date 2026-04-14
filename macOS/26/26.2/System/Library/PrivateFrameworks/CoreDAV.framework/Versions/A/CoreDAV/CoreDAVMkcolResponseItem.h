@class NSMutableSet;

@interface CoreDAVMkcolResponseItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *propStats;

+ (id)copyParseRules;

- (BOOL)hasPropertyError;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)addPropStat:(id)a0;

@end
