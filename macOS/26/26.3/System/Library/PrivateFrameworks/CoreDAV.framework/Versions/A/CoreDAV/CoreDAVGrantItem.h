@class NSMutableSet;

@interface CoreDAVGrantItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *privileges;

+ (id)copyParseRules;

- (void)write:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addPrivilege:(id)a0;

@end
