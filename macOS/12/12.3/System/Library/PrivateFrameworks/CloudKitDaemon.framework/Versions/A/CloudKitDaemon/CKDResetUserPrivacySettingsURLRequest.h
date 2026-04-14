@interface CKDResetUserPrivacySettingsURLRequest : CKDURLRequest

- (long long)databaseScope;
- (id)requestOperationClasses;
- (BOOL)requiresTokenRegistration;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;

@end
