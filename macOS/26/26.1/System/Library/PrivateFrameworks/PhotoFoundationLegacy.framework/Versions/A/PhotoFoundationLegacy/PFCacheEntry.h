@protocol NSCopying, NSObject;

@interface PFCacheEntry : NSObject {
    id<NSCopying, NSObject> _key;
    id _value;
    unsigned long long _createTime;
    unsigned long long _lastReadTime;
    unsigned long long _readCount;
}

- (void)touch;
- (id)key;
- (id)value;
- (unsigned long long)createTime;
- (id)description;
- (unsigned long long)readCount;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0 value:(id)a1;
- (unsigned long long)lastReadTime;

@end
