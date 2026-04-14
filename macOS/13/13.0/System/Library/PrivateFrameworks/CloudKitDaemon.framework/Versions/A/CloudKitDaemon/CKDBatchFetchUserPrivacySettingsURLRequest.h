@class NSArray;

@interface CKDBatchFetchUserPrivacySettingsURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *containerPrivacySettings;

- (void).cxx_destruct;
- (long long)databaseScope;
- (id)requestOperationClasses;
- (BOOL)requiresTokenRegistration;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;

@end
