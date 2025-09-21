@class NSString;

@interface LACAKSIdentityPolicyStatus : NSObject

@property (nonatomic, readonly) double backoff;
@property (nonatomic, readonly) long long maxAttempts;
@property (nonatomic, readonly) long long failedAttempts;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithRawStatus:(id)a0;

@end
