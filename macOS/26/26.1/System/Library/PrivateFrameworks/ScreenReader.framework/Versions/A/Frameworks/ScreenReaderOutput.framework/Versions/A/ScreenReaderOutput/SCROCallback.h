@protocol NSSecureCoding;

@interface SCROCallback : NSObject <NSSecureCoding> {
    int _key;
    id<NSSecureCoding> _object;
    BOOL _isAtomic;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)object;
- (BOOL)isAtomic;
- (int)key;
- (void)encodeWithCoder:(id)a0;
- (id)initWithKey:(int)a0 object:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)postToHandler:(id)a0;
- (void)setIsAtomic:(BOOL)a0;

@end
