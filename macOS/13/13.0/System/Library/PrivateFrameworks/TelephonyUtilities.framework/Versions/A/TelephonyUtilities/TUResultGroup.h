@class NSArray, TUGroupTitle, NSMutableArray;

@interface TUResultGroup : NSObject <NSCopying>

@property (retain, nonatomic) TUGroupTitle *title;
@property (retain, nonatomic) NSMutableArray *resultsCache;
@property (readonly) NSArray *results;
@property (readonly) unsigned long long groupType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)removeSearchItem:(id)a0;
- (id)initWithTitle:(id)a0 results:(id)a1;

@end
