@class NSUnit;

@interface PPSUnit : NSObject

@property (readonly) NSUnit *unit;

+ (id)megabytes;
+ (id)celsius;
+ (id)bytes;
+ (id)kilobytes;
+ (id)minutes;
+ (id)seconds;
+ (id)grams;
+ (id)microseconds;
+ (id)milliseconds;
+ (id)nanoseconds;
+ (id)volts;
+ (id)watts;
+ (id)dimensionless;
+ (BOOL)isValidUnitJSON:(id)a0;
+ (id)microWattHours;
+ (id)milliAmpereHours;
+ (id)milliAmperes;
+ (id)milliVolts;
+ (id)milliWatts;
+ (id)unitWithJSONObject:(id)a0;
+ (id)unitWithProto:(id)a0;

- (id)json;
- (id)proto;
- (void).cxx_destruct;
- (id)initWithUnit:(id)a0;

@end
