@interface PXDateRange : NSObject <NSCopying>

@property (readonly) double startDate;
@property (readonly) double endDate;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)intersectsRange:(id)a0;
- (id)initWithStartDate:(double)a0 endDate:(double)a1;
- (BOOL)isStrictlyBeforeRange:(id)a0;

@end
