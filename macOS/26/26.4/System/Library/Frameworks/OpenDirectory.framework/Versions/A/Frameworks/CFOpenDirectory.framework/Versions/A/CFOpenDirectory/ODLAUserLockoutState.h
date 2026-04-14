@class NSString, LAUserLockoutState;

@interface ODLAUserLockoutState : NSObject {
    LAUserLockoutState *_underlying;
}

@property (readonly, nonatomic) double backoff;
@property (readonly, nonatomic) long long failedAttempts;
@property (readonly, nonatomic) long long maxAttempts;
@property (readonly, nonatomic) long long rawValue;
@property (readonly, nonatomic) NSString *description;

- (void)dealloc;

@end
