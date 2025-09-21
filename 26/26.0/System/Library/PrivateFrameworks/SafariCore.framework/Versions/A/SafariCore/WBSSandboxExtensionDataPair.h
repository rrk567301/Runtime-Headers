@interface WBSSandboxExtensionDataPair : WBSPair <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithFirst:(id)a0 second:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithToken:(id)a0 permissions:(id)a1;

@end
