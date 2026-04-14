@interface NSURLKeyValuePair : NSObject {
    id key;
    id value;
    unsigned long long hash;
}

+ (id)pair;
+ (id)pairWithKey:(id)a0 value:(id)a1;

- (id)key;
- (id)description;
- (id)initWithKey:(id)a0 value:(id)a1;
- (void)setKey:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)setValue:(id)a0;
- (unsigned long long)hash;
- (id)value;

@end
