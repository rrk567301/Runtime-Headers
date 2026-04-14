@class NSString;

@interface CUIPerformanceMeasurement : NSObject

@property (readonly) NSString *measurementName;
@property (readonly) NSString *measurementComment;
@property (readonly) double measurementValue;

+ (id)performanceMeasurementWithName:(id)a0 comment:(id)a1 value:(double)a2;

- (void)dealloc;
- (id)XMLElement;
- (id)initWithName:(id)a0 comment:(id)a1 value:(double)a2;

@end
