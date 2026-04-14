@class NSError, NSDate;

@interface GKCredentialRenewalInfo : NSObject

@property (readonly, nonatomic) NSDate *attemptDate;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithAttemptDate:(id)a0 error:(id)a1;
- (BOOL)isExpiredWithTTL:(double)a0;

@end
