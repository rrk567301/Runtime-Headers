@interface CSFRangeUtils : NSObject

@property (readonly, nonatomic) unsigned long long startPoint;
@property (readonly, nonatomic) unsigned long long endPoint;

- (char)hasIntersectionWithRange:(id)a0;
- (id)initWithStartPoint:(unsigned long long)a0 endPoint:(unsigned long long)a1;

@end
