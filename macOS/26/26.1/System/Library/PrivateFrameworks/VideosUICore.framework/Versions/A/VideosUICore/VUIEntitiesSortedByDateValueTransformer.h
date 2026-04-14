@class NSDate;

@interface VUIEntitiesSortedByDateValueTransformer : NSValueTransformer

@property (copy, nonatomic) id /* block */ dateForEntityBlock;
@property (nonatomic) unsigned long long maxEntities;
@property (copy, nonatomic) NSDate *earliestDate;

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (void).cxx_destruct;
- (id)transformedValue:(id)a0;
- (id)init;
- (id)initWithDateForEntityBlock:(id /* block */)a0;

@end
