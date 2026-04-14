@interface EKPersistentSyncError : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;

- (void)setUserInfoData:(id)a0;
- (id)userInfoData;
- (void)setErrorCode:(int)a0;
- (int)errorCode;
- (int)entityType;
- (int)errorType;
- (void)setErrorType:(int)a0;

@end
