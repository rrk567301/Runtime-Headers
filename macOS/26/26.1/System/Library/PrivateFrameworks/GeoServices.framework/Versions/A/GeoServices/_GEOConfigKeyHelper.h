@class NSNumber, NSString;

@interface _GEOConfigKeyHelper : NSObject <NSCopying> {
    id _lastValue;
    long long _keySource;
    NSNumber *_keyNumber;
    NSString *_keyString;
    struct { unsigned int identifier; void *metadata; } configKey;
}

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
