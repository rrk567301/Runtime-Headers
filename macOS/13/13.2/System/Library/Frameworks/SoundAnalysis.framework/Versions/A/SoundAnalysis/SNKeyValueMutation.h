@class NSString;

@interface SNKeyValueMutation : NSObject <NSCopying> {
    int _type;
    NSString *_keyPath;
    id _value;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
