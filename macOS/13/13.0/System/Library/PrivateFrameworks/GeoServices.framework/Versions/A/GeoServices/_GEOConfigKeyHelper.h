@class NSNumber, NSString;

@interface _GEOConfigKeyHelper : NSObject <NSCopying> {
    id _lastValue;
    long long _keySource;
    NSNumber *_keyNumber;
    NSString *_keyString;
    struct { unsigned int identifier; void *metadata; } configKey;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
