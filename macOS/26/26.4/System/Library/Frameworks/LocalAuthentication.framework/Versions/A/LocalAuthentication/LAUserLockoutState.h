@class NSString;

@interface LAUserLockoutState : NSObject {
    void /* unknown type, empty encoding */ properties;
}

@property (nonatomic, readonly) double backoff;
@property (nonatomic, readonly) long long maxAttempts;
@property (nonatomic, readonly) long long failedAttempts;
@property (nonatomic, readonly) long long rawValue;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoreLockoutState:(id)a0;
- (id)initWithLockoutState:(id)a0;

@end
