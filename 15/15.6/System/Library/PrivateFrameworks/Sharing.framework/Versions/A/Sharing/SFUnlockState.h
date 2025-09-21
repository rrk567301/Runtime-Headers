@class NSNumber;

@interface SFUnlockState : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSNumber *unlockEnabled;
@property (readonly) NSNumber *remotePasscodeEnabled;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUnlockEnabled:(id)a0 remotePasscodeEnabled:(id)a1;

@end
