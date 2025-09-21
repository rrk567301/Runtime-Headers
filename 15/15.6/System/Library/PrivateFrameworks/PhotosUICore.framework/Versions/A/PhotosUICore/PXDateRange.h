@interface PXDateRange : NSObject <NSCopying>

@property (readonly) double startDate;
@property (readonly) double endDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithStartDate:(double)a0 endDate:(double)a1;
- (char)intersectsRange:(id)a0;
- (char)isStrictlyBeforeRange:(id)a0;

@end
