@interface CKDResetUserPrivacySettingsURLRequest : CKDURLRequest

- (id)requestOperationClasses;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (long long)databaseScope;
- (BOOL)requiresTokenRegistration;

@end
