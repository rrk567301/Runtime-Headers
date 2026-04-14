@interface PXDateRange : NSObject <NSCopying>

@property (readonly) double startDate;
@property (readonly) double endDate;

- (BOOL)intersectsRange:(id)a0;
- (id)initWithStartDate:(double)a0 endDate:(double)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isStrictlyBeforeRange:(id)a0;

@end
