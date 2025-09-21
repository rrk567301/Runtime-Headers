@class NSString;

@interface LAUserLockoutState : NSObject {
    void /* unknown type, empty encoding */ properties;
}

@property (nonatomic, readonly) double backoff;
@property (nonatomic, readonly) long long maxAttempts;
@property (nonatomic, readonly) long long failedAttempts;
@property (nonatomic, readonly) long long rawValue;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoreLockoutState:(id)a0;
- (id)initWithLockoutState:(id)a0;

@end
