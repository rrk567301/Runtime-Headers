@class NSMutableSet;

@interface CoreDAVDenyItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *privileges;

+ (id)copyParseRules;

- (void)write:(id)a0;
- (void)addPrivilege:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
