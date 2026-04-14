@interface EKPersistentSyncError : EKPersistentObject

+ (Class)meltedClass;
+ (id)relations;

- (int)errorCode;
- (int)entityType;
- (void)setUserInfoData:(id)a0;
- (void)setErrorCode:(int)a0;
- (id)userInfoData;
- (int)errorType;
- (void)setErrorType:(int)a0;

@end
