@protocol NSSecureCoding;

@interface SCROCallback : NSObject <NSSecureCoding> {
    int _key;
    id<NSSecureCoding> _object;
    BOOL _isAtomic;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isAtomic;
- (id)initWithKey:(int)a0 object:(id)a1;
- (id)object;
- (int)key;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)postToHandler:(id)a0;
- (void)setIsAtomic:(BOOL)a0;

@end
