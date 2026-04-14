@class NSString, NSDictionary, NSError, NSDate;

@interface KTSelfValidationURIDiagnostics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDictionary *ktVerificationInfoDiagnosticsJson;
@property (retain) NSDictionary *transparentDataDiagnosticsJson;
@property (retain) NSString *result;
@property (readonly) NSDictionary *diagnosticsJsonDictionary;
@property (retain) NSError *error;
@property (retain) NSDate *requestTime;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
