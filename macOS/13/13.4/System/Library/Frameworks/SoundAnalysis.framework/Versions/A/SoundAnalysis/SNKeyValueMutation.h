@class NSString;

@interface SNKeyValueMutation : NSObject <NSCopying> {
    int _type;
    NSString *_keyPath;
    id _value;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
