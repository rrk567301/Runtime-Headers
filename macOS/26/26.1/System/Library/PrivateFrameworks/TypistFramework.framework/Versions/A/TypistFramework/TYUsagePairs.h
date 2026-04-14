@class NSMutableArray;

@interface TYUsagePairs : NSObject

@property (retain, nonatomic) NSMutableArray *_usagePages;
@property (retain, nonatomic) NSMutableArray *_usages;

- (void).cxx_destruct;
- (id)init;
- (id)usages;
- (id)usagePages;

@end
