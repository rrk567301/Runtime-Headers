@interface PKPassLiveRender : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL enabled;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_init;
- (id)description;
- (id)init;
- (id)initWithEnabled:(BOOL)a0;

@end
