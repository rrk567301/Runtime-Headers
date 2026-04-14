@interface SYActivityObserverContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL needsCacheUpdate;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
