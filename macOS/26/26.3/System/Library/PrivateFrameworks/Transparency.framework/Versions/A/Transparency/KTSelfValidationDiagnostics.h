@class NSString, NSDictionary;

@interface KTSelfValidationDiagnostics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *rawAccountKey;
@property (retain) NSString *accountKey;
@property (retain) NSString *pushToken;
@property (retain) NSDictionary *uriToDiagnostics;
@property (retain) NSDictionary *ktSelfVerificationInfoDiagnosticsJson;
@property (readonly) NSDictionary *diagnosticsJsonDictionary;

+ (id)jsonClasses;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
