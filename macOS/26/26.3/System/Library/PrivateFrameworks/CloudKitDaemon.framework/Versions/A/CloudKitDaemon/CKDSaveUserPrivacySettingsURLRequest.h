@interface CKDSaveUserPrivacySettingsURLRequest : CKDURLRequest

@property (nonatomic) long long discoverableTrinary;

- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (id)initWithOperation:(id)a0;
- (long long)databaseScope;
- (void)setDiscoverable:(BOOL)a0;
- (BOOL)requiresTokenRegistration;

@end
