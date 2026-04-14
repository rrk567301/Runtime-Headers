@class NSMutableSet;

@interface CoreDAVMkcolResponseItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *propStats;

+ (id)copyParseRules;

- (void)addPropStat:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasPropertyError;

@end
