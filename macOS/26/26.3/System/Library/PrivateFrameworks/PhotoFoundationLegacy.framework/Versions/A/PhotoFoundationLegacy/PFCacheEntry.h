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
- (id)description;
- (id)initWithKey:(id)a0 value:(id)a1;
- (unsigned long long)createTime;
- (void).cxx_destruct;
- (id)value;
- (unsigned long long)readCount;
- (unsigned long long)lastReadTime;

@end
