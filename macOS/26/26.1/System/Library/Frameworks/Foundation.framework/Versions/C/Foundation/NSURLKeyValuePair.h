@interface NSURLKeyValuePair : NSObject {
    id key;
    id value;
    unsigned long long hash;
}

+ (id)pair;
+ (id)pairWithKey:(id)a0 value:(id)a1;

- (void)setValue:(id)a0;
- (unsigned long long)hash;
- (id)key;
- (id)value;
- (id)description;
- (void)dealloc;
- (void)setKey:(id)a0;
- (id)initWithKey:(id)a0 value:(id)a1;
- (BOOL)isEqual:(id)a0;

@end
