@class NSIndexSet, NSNumber, MADRemoveBackgroundMatteResult;

@interface MADRemoveBackgroundMatteRequest : MADRequest

@property (copy, nonatomic) NSIndexSet *instances;
@property (nonatomic) char inPlace;
@property (nonatomic) char cropResult;
@property (copy, nonatomic) NSNumber *imageType;
@property (readonly, nonatomic) MADRemoveBackgroundMatteResult *result;

+ (char)supportsSecureCoding;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
