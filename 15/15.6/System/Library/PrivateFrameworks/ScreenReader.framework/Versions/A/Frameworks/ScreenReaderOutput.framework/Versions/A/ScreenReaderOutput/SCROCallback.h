@protocol NSSecureCoding;

@interface SCROCallback : NSObject <NSSecureCoding> {
    int _key;
    id<NSSecureCoding> _object;
    char _isAtomic;
}

@property (class, readonly) char supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)object;
- (int)key;
- (id)initWithKey:(int)a0 object:(id)a1;
- (char)isAtomic;
- (void)postToHandler:(id)a0;
- (void)setIsAtomic:(char)a0;

@end
