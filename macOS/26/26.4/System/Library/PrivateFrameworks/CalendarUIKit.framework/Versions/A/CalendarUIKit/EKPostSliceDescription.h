@class EKSeriesDetails;

@interface EKPostSliceDescription : EKSliceDescription

@property (copy) EKSeriesDetails *updatedMainSeriesDetails;
@property (copy) EKSeriesDetails *createdSeriesDetails;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithOriginalSliceDescription:(id)a0;

@end
