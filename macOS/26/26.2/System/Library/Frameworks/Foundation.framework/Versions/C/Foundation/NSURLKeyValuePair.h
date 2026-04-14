@interface NSURLKeyValuePair : NSObject {
    id key;
    id value;
    unsigned long long hash;
}

+ (id)pair;
+ (id)pairWithKey:(id)a0 value:(id)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setValue:(id)a0;
- (id)description;
- (id)value;
- (id)initWithKey:(id)a0 value:(id)a1;
- (void)setKey:(id)a0;
- (id)key;
- (void)dealloc;

@end
