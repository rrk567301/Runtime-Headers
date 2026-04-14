@interface EKPersistentSyncError : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;

- (id)userInfoData;
- (void)setUserInfoData:(id)a0;
- (void)setErrorCode:(int)a0;
- (int)errorCode;
- (int)entityType;
- (int)errorType;
- (void)setErrorType:(int)a0;

@end
