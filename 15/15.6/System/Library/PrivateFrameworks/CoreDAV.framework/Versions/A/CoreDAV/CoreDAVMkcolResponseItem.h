@class NSMutableSet;

@interface CoreDAVMkcolResponseItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *propStats;

+ (id)copyParseRules;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)hasPropertyError;
- (void)addPropStat:(id)a0;

@end
