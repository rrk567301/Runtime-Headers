@class NSMutableSet;

@interface CoreDAVACLItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *accessControlEntities;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)addACE:(id)a0;
- (id)liveACEs;
- (id)notGrantedSubsetOfACEs:(id)a0;

@end
