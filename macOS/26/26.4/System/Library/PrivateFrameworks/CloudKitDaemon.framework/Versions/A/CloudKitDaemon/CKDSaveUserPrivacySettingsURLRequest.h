@interface CKDSaveUserPrivacySettingsURLRequest : CKDURLRequest

@property (nonatomic) long long discoverableTrinary;

- (long long)databaseScope;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)a0;
- (void)setDiscoverable:(BOOL)a0;
- (BOOL)requiresTokenRegistration;

@end
