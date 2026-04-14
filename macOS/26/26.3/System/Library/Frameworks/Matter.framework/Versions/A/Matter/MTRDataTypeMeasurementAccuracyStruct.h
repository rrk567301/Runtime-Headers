@class NSNumber, NSArray;

@interface MTRDataTypeMeasurementAccuracyStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *measurementType;
@property (copy, nonatomic) NSNumber *measured;
@property (copy, nonatomic) NSNumber *minMeasuredValue;
@property (copy, nonatomic) NSNumber *maxMeasuredValue;
@property (copy, nonatomic) NSArray *accuracyRanges;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
