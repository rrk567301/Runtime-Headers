@protocol NSCopying, NSObject;

@interface PFCacheEntry : NSObject {
    id<NSCopying, NSObject> _key;
    id _value;
    unsigned long long _createTime;
    unsigned long long _lastReadTime;
    unsigned long long _readCount;
}

- (id)key;
- (void)touch;
- (id)initWithKey:(id)a0 value:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)readCount;
- (id)value;
- (id)description;
- (unsigned long long)createTime;
- (unsigned long long)lastReadTime;

@end
