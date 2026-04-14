@interface NSURLKeyValuePair : NSObject {
    id key;
    id value;
    unsigned long long hash;
}

+ (id)pair;
+ (id)pairWithKey:(id)a0 value:(id)a1;

- (id)key;
- (BOOL)isEqual:(id)a0;
- (id)initWithKey:(id)a0 value:(id)a1;
- (unsigned long long)hash;
- (id)value;
- (id)description;
- (void)setKey:(id)a0;
- (void)setValue:(id)a0;
- (void)dealloc;

@end
