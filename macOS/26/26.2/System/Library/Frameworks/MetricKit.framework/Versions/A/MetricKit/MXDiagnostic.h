@class MXMetaData, NSArray, NSString, NSMeasurementFormatter;

@interface MXDiagnostic : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSMeasurementFormatter *measurementFormatter;
@property (retain) MXMetaData *metaData;
@property (retain) NSArray *signpostData;
@property int pid;
@property (readonly) NSString *applicationVersion;

- (id)initWithCoder:(id)a0;
- (id)JSONRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)dictionaryRepresentation;
- (id)initWithMetaData:(id)a0 applicationVersion:(id)a1;
- (id)initWithMetaData:(id)a0 applicationVersion:(id)a1 signpostData:(id)a2 andPID:(int)a3;

@end
