@class NSMeasurementFormatter;

@interface MXMetric : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSMeasurementFormatter *measurementFormatter;

- (id)dictionaryRepresentation;
- (id)init;
- (id)toDictionary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)JSONRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)DictionaryRepresentation;

@end
