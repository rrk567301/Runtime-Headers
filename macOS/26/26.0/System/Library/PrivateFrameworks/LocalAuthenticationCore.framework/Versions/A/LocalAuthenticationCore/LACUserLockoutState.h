@class NSString;

@interface LACUserLockoutState : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ properties;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) double backoff;
@property (nonatomic, readonly) long long maxAttempts;
@property (nonatomic, readonly) long long failedAttempts;
@property (nonatomic, readonly) long long rawValue;
@property (nonatomic, readonly) NSString *description;

+ (id)unknownLockoutState;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRawValue:(long long)a0 backoff:(double)a1 maxAttempts:(long long)a2 failedAttempts:(long long)a3;

@end
