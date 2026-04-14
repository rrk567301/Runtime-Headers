@class NSUnit;

@interface PPTUnit : NSObject

@property (readonly) NSUnit *unit;

+ (id)seconds;
+ (id)volts;
+ (id)celsius;
+ (id)unitWithJSONObject:(id)a0;
+ (BOOL)isValidUnitJSON:(id)a0;
+ (id)unitWithProto:(id)a0;

- (void).cxx_destruct;
- (id)initWithUnit:(id)a0;
- (id)proto;

@end
