@interface EKPersistentSyncError : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;

- (void)setErrorCode:(int)a0;
- (int)errorCode;
- (int)entityType;
- (void)setErrorType:(int)a0;
- (int)errorType;
- (void)setUserInfoData:(id)a0;
- (id)userInfoData;

@end
