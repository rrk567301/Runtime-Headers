@class NSString;

@interface PowerlogLiteOperators.ACDiagnosticsClientConstants : NSObject

@property (class, nonatomic, readonly) NSString *result;
@property (class, nonatomic, readonly) NSString *error;
@property (class, nonatomic, readonly) NSString *statusReason;
@property (class, nonatomic, readonly) NSString *retryAfterSeconds;
@property (class, nonatomic, readonly) NSString *encryptedMetadata;
@property (class, nonatomic, readonly) NSString *encryptionVersion;
@property (class, nonatomic, readonly) NSString *ckTagConfigInternal;
@property (class, nonatomic, readonly) NSString *ckTagConfigBeta;
@property (class, nonatomic, readonly) NSString *ckTagConfigModel;
@property (class, nonatomic, readonly) NSString *ckTagConfigUUID;
@property (class, nonatomic, readonly) NSString *ckTagConfigReason;
@property (class, nonatomic, readonly) NSString *ckTagConfigBuild;
@property (class, nonatomic, readonly) NSString *ckTagConfigDate;
@property (class, nonatomic, readonly) NSString *ckTagConfigSubmittedFilesMask;
@property (class, nonatomic, readonly) NSString *ckTagConfigFileName;
@property (class, nonatomic, readonly) NSString *ckTagConfigExtendedAttributes;
@property (class, nonatomic, readonly) NSString *ckTagConfigHandoverDate;
@property (class, nonatomic, readonly) NSString *ckTagConfigCollectDate;

- (void).cxx_destruct;
- (id)init;

@end
