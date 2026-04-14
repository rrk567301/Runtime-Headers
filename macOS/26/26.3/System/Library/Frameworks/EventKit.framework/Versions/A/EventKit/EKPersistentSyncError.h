@interface EKPersistentSyncError : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;

- (void)setErrorCode:(int)a0;
- (int)errorCode;
- (id)userInfoData;
- (int)entityType;
- (void)setUserInfoData:(id)a0;
- (int)errorType;
- (void)setErrorType:(int)a0;

@end
