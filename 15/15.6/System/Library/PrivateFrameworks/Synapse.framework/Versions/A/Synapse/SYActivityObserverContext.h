@interface SYActivityObserverContext : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char needsCacheUpdate;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
