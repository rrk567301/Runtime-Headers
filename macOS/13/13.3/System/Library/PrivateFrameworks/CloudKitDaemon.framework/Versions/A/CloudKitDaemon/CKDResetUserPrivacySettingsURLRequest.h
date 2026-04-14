@interface CKDResetUserPrivacySettingsURLRequest : CKDURLRequest

- (long long)databaseScope;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (BOOL)requiresTokenRegistration;

@end
