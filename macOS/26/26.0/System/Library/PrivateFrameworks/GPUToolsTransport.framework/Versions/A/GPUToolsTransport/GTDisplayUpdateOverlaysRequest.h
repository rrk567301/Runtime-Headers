@interface GTDisplayUpdateOverlaysRequest : GTDisplayUpdateRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long overlays;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
