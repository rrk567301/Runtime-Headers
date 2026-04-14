@interface NSURLKeyValuePair : NSObject {
    id key;
    id value;
    unsigned long long hash;
}

+ (id)pair;
+ (id)pairWithKey:(id)a0 value:(id)a1;

- (void)setValue:(id)a0;
- (id)value;
- (void)dealloc;
- (id)initWithKey:(id)a0 value:(id)a1;
- (id)description;
- (void)setKey:(id)a0;
- (id)key;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
