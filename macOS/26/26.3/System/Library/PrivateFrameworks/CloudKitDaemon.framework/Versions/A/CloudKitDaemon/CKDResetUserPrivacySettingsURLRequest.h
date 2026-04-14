@interface CKDResetUserPrivacySettingsURLRequest : CKDURLRequest

- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (long long)databaseScope;
- (BOOL)requiresTokenRegistration;

@end
