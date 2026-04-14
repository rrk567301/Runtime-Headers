@interface PKPassLiveRender : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL enabled;

- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithEnabled:(BOOL)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
