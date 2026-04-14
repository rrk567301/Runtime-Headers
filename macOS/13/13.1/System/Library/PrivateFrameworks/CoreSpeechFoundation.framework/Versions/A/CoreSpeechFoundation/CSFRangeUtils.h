@interface CSFRangeUtils : NSObject

@property (readonly, nonatomic) unsigned long long startPoint;
@property (readonly, nonatomic) unsigned long long endPoint;

- (id)initWithStartPoint:(unsigned long long)a0 endPoint:(unsigned long long)a1;
- (BOOL)hasIntersectionWithRange:(id)a0;

@end
