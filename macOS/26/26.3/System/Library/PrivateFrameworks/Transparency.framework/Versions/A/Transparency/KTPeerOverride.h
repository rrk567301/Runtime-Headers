@interface KTPeerOverride : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long uiStatus;

- (id)description;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
