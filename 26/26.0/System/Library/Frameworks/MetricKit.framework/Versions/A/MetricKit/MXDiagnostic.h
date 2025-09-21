@class MXMetaData, NSArray, NSString, NSMeasurementFormatter;

@interface MXDiagnostic : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSMeasurementFormatter *measurementFormatter;
@property (retain) MXMetaData *metaData;
@property (retain) NSArray *signpostData;
@property int pid;
@property (readonly) NSString *applicationVersion;

- (id)JSONRepresentation;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (void).cxx_destruct;
- (id)initWithMetaData:(id)a0 applicationVersion:(id)a1;
- (id)initWithMetaData:(id)a0 applicationVersion:(id)a1 signpostData:(id)a2 andPID:(int)a3;

@end
