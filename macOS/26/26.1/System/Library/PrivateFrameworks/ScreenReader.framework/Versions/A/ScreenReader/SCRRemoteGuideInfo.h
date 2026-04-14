@class NSSet, NSArray;

@interface SCRRemoteGuideInfo : NSObject

@property (copy, nonatomic) NSSet *searchKeys;
@property (copy, nonatomic) NSArray *results;
@property (copy, nonatomic) NSArray *guideItems;
@property (nonatomic) long long limit;
@property (nonatomic) BOOL lazyFetch;
@property (nonatomic) long long direction;
@property (nonatomic) long long selectionIndex;
@property (nonatomic) BOOL refreshMenuWindow;

- (void).cxx_destruct;
- (id)init;

@end
