@class NSUnit;

@interface PPTUnit : NSObject

@property (readonly) NSUnit *unit;

+ (id)celsius;
+ (id)seconds;
+ (id)grams;
+ (id)volts;
+ (id)dimensionless;
+ (BOOL)isValidUnitJSON:(id)a0;
+ (id)microWattHours;
+ (id)milliAmpereHours;
+ (id)milliAmperes;
+ (id)milliVolts;
+ (id)unitWithJSONObject:(id)a0;
+ (id)unitWithProto:(id)a0;

- (void).cxx_destruct;
- (id)initWithUnit:(id)a0;
- (id)proto;

@end
