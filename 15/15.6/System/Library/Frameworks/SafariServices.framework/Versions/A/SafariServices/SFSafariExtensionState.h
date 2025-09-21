@interface SFSafariExtensionState : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isEnabled) char enabled;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEnabledState:(char)a0;

@end
