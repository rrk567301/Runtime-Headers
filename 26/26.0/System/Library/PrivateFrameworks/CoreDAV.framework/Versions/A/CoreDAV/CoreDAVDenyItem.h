@class NSMutableSet;

@interface CoreDAVDenyItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *privileges;

+ (id)copyParseRules;

- (id)init;
- (id)description;
- (void)write:(id)a0;
- (void)addPrivilege:(id)a0;
- (void).cxx_destruct;

@end
