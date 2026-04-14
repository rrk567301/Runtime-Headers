@class NSMutableSet;

@interface CoreDAVGrantItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *privileges;

+ (id)copyParseRules;

- (void)write:(id)a0;
- (void)addPrivilege:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
