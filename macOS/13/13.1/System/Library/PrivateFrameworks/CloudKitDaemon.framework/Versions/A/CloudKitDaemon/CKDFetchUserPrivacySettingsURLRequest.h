@class CKDPUserPrivacySettings;

@interface CKDFetchUserPrivacySettingsURLRequest : CKDURLRequest

@property (retain, nonatomic) CKDPUserPrivacySettings *userPrivacySettings;

- (void).cxx_destruct;
- (long long)databaseScope;
- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;

@end
