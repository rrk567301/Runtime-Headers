@interface CKDResetUserPrivacySettingsURLRequest : CKDURLRequest

- (id)requestOperationClasses;
- (long long)databaseScope;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (BOOL)requiresTokenRegistration;

@end
