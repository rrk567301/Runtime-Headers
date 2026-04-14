@interface CKDSaveUserPrivacySettingsURLRequest : CKDURLRequest

@property (nonatomic) long long discoverableTrinary;

- (id)requestOperationClasses;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (long long)databaseScope;
- (id)initWithOperation:(id)a0;
- (void)setDiscoverable:(BOOL)a0;
- (BOOL)requiresTokenRegistration;

@end
