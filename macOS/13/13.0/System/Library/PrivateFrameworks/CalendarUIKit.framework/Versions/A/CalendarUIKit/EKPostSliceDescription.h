@class EKSeriesDetails;

@interface EKPostSliceDescription : EKSliceDescription

@property (copy) EKSeriesDetails *updatedMainSeriesDetails;
@property (copy) EKSeriesDetails *createdSeriesDetails;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithOriginalSliceDescription:(id)a0;

@end
