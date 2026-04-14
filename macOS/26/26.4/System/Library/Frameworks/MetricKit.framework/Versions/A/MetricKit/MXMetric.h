@class NSMeasurementFormatter;

@interface MXMetric : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSMeasurementFormatter *measurementFormatter;

- (void)encodeWithCoder:(id)a0;
- (id)JSONRepresentation;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)init;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;
- (id)DictionaryRepresentation;

@end
