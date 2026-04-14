@class GCColor;

@interface GCDeviceLight : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) GCColor *color;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithColor:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
