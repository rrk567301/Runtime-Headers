@class NSIndexSet, NSNumber, MADRemoveBackgroundMatteResult;

@interface MADRemoveBackgroundMatteRequest : MADRequest

@property (copy, nonatomic) NSIndexSet *instances;
@property (nonatomic) BOOL inPlace;
@property (nonatomic) BOOL cropResult;
@property (copy, nonatomic) NSNumber *imageType;
@property (readonly, nonatomic) MADRemoveBackgroundMatteResult *result;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
