@class NSNumberFormatter, NSLocale;

@interface NSMeasurementFormatter : NSFormatter <NSSecureCoding> {
    void *_formatter;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long unitOptions;
@property long long unitStyle;
@property (copy) NSLocale *locale;
@property (copy) NSNumberFormatter *numberFormatter;

- (id)stringForObjectValue:(id)a0;
- (id)stringFromMeasurement:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)measurementFromString:(id)a0;
- (id)init;
- (id)stringFromUnit:(id)a0;
- (id)initWithCoder:(id)a0;

@end
