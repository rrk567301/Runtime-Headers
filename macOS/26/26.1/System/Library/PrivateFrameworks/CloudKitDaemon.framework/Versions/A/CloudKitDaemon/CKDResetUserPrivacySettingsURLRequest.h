@interface CKDResetUserPrivacySettingsURLRequest : CKDURLRequest

- (id)generateRequestOperations;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (long long)databaseScope;
- (BOOL)requiresTokenRegistration;

@end
