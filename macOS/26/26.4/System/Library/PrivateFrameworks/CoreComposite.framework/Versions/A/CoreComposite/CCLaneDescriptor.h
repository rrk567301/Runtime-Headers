@interface CCLaneDescriptor : NSObject <NSCopying>

@property (nonatomic) long long laneType;
@property (retain, nonatomic) Class dataType;
@property (retain, nonatomic) Class dataDescriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDataType:(Class)a0 laneType:(long long)a1;
- (id)initWithDataType:(Class)a0 laneType:(long long)a1 dataDescriptor:(Class)a2;

@end
