@protocol NSSecureCoding;

@interface SCROCallback : NSObject <NSSecureCoding> {
    int _key;
    id<NSSecureCoding> _object;
    BOOL _isAtomic;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (BOOL)isAtomic;
- (id)object;
- (int)key;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithKey:(int)a0 object:(id)a1;
- (void)postToHandler:(id)a0;
- (void)setIsAtomic:(BOOL)a0;

@end
