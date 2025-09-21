@interface RTTripClusterEnumerationOptions : RTEnumerationOptions <NSCopying>

@property (nonatomic) unsigned long long batchSize;
@property (nonatomic) double startLatitude;
@property (nonatomic) double startLongitude;
@property (nonatomic) double endLatitude;
@property (nonatomic) double endLongitude;
@property (nonatomic) unsigned short minCountOfTraversal;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (Class)enumeratedType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id /* block */)processingBlock;
- (id)initWithMinCountOfTraversal:(unsigned short)a0 startLatitude:(double)a1 startLongitude:(double)a2 endLatitude:(double)a3 endLongitude:(double)a4;
- (id)initWithStartAndEndVisitLatitude:(double)a0 startLongitude:(double)a1 endLatitude:(double)a2 endLongitude:(double)a3;
- (id)initWithStartVisitLatitude:(double)a0 startVisitLongitude:(double)a1 endVisitLatitude:(double)a2 endVisitLongitude:(double)a3;
- (id)initWithbatchSize:(unsigned long long)a0;
- (id)initWithEndVisitLatitude:(double)a0 endLongitude:(double)a1;
- (id)initWithStartVisitLatitude:(double)a0 startLongitude:(double)a1;

@end
