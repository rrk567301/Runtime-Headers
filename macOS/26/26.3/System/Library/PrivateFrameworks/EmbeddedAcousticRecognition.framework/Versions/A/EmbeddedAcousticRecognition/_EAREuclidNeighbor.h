@class NSString, NSNumber;

@interface _EAREuclidNeighbor : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSNumber *distance;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 distance:(id)a1;

@end
