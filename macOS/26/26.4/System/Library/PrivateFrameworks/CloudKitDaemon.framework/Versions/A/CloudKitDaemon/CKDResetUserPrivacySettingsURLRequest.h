@interface CKDResetUserPrivacySettingsURLRequest : CKDURLRequest

- (long long)databaseScope;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)generateRequestOperations;
- (BOOL)requiresTokenRegistration;

@end
