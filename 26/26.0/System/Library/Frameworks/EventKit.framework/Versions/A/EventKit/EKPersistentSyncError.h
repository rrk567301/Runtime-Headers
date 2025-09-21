@interface EKPersistentSyncError : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;

- (int)errorCode;
- (int)entityType;
- (void)setErrorCode:(int)a0;
- (id)userInfoData;
- (void)setUserInfoData:(id)a0;
- (int)errorType;
- (void)setErrorType:(int)a0;

@end
