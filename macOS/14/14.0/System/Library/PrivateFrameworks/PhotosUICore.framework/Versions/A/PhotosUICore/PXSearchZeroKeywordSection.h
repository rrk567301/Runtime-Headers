@class NSArray;

@interface PXSearchZeroKeywordSection : NSObject

@property (readonly, nonatomic) long long sectionType;
@property (readonly, nonatomic) NSArray *viewModels;

- (id)description;
- (void).cxx_destruct;
- (void)removeItem:(id)a0;
- (id)initWithType:(long long)a0 viewModels:(id)a1;

@end
