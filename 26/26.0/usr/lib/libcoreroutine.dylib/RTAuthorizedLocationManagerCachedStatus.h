@class NSLock, RTAuthorizedLocationStatus, NSDate;

@interface RTAuthorizedLocationManagerCachedStatus : NSObject

@property (retain, nonatomic) RTAuthorizedLocationStatus *lastAuthLocConfirmationStatus;
@property (nonatomic) long long lastAuthLocConfirmationStatusCode;
@property (retain, nonatomic) NSDate *lastAuthLocConfirmationComputedTime;
@property (retain, nonatomic) NSLock *statusCacheLock;
@property (nonatomic) long long lastZDRLocationStatus;
@property (nonatomic) long long lastZDRLocationStatusCode;
@property (retain, nonatomic) NSDate *lastZDRLocationStatusComputationTime;

- (id)init;
- (void).cxx_destruct;
- (id)getAuthConfirmationStatus;
- (long long)getAuthConfirmationStatusCode;
- (id)getAuthLocConfirmationComputedTime;
- (long long)getZDRLocationStatus;
- (long long)getZDRLocationStatusCode;
- (id)getZDRLocationStatusComputationTime;
- (void)setAuthConfirmationStatusToCacheInfo:(id)a0 statusCode:(long long)a1 timestamp:(id)a2;
- (void)setZDRStatusToCacheInfo:(long long)a0 zdrStatusCode:(long long)a1 zdrTimestamp:(id)a2;

@end
