@interface FCFeedTransformationFilterItemResult : NSObject

@property (readonly, nonatomic) id item;
@property (nonatomic, getter=isFiltered) char filtered;
@property (nonatomic) unsigned long long filteredReasons;

- (void).cxx_destruct;
- (id)initWithItem:(id)a0 filtered:(char)a1 filteredReasons:(unsigned long long)a2;

@end
