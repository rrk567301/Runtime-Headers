@class NSNumber, MADRemoveBackgroundMaskResult;

@interface MADRemoveBackgroundMaskRequest : MADRequest

@property (copy, nonatomic) NSNumber *imageType;
@property (readonly, nonatomic) MADRemoveBackgroundMaskResult *result;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
