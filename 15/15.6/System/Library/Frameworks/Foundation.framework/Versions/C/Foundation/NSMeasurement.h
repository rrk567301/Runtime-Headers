@class NSUnit;

@interface NSMeasurement : NSObject <NSCopying, NSSecureCoding> {
    NSUnit *_unit;
    double _doubleValue;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSUnit *unit;
@property (readonly) double doubleValue;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)measurementByAddingMeasurement:(id)a0;
- (id)_performOperation:(long long)a0 withMeasurement:(id)a1;
- (char)canBeConvertedToUnit:(id)a0;
- (id)initWithDoubleValue:(double)a0 unit:(id)a1;
- (id)measurementByConvertingToUnit:(id)a0;
- (id)measurementBySubtractingMeasurement:(id)a0;

@end
