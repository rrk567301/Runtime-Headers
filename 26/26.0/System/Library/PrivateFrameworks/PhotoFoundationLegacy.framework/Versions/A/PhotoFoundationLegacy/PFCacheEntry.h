@protocol NSCopying, NSObject;

@interface PFCacheEntry : NSObject {
    id<NSCopying, NSObject> _key;
    id _value;
    unsigned long long _createTime;
    unsigned long long _lastReadTime;
    unsigned long long _readCount;
}

- (id)value;
- (unsigned long long)createTime;
- (id)initWithKey:(id)a0 value:(id)a1;
- (id)description;
- (unsigned long long)readCount;
- (id)key;
- (void)touch;
- (void).cxx_destruct;
- (unsigned long long)lastReadTime;

@end
