@interface CKDSaveUserPrivacySettingsURLRequest : CKDURLRequest

@property (nonatomic) long long discoverableTrinary;

- (id)requestOperationClasses;
- (id)initWithOperation:(id)a0;
- (long long)databaseScope;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (void)setDiscoverable:(BOOL)a0;
- (BOOL)requiresTokenRegistration;

@end
