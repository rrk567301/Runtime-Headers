@interface PKPassLiveRender : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL enabled;

- (id)description;
- (id)init;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEnabled:(BOOL)a0;

@end
