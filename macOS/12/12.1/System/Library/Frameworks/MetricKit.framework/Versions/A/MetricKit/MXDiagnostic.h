@class MXMetaData, NSString, NSMeasurementFormatter;

@interface MXDiagnostic : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSMeasurementFormatter *measurementFormatter;
@property (retain) MXMetaData *metaData;
@property (readonly) NSString *applicationVersion;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)toDictionary;
- (id)JSONRepresentation;
- (id)initWithMetaData:(id)a0 applicationVersion:(id)a1;

@end
