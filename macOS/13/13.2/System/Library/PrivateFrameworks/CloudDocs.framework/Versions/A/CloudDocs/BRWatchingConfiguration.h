@class NSString, NSMutableArray;

@interface BRWatchingConfiguration : NSObject

@property (readonly, nonatomic) unsigned long long watchTypes;
@property (readonly, nonatomic) NSMutableArray *appLibraryIDs;
@property (readonly, nonatomic) NSMutableArray *urls;
@property (readonly, nonatomic) NSString *gatherPrefix;

- (void).cxx_destruct;
- (id)initWithScopes:(id)a0 predicate:(id)a1;

@end
