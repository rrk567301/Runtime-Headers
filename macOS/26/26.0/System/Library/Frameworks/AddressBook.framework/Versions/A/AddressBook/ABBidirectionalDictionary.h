@class NSMutableDictionary;

@interface ABBidirectionalDictionary : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_keyToObjectDictionary;
    NSMutableDictionary *_objectToKeyDictionary;
}

+ (id)bidirectionalDictionary;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (id)keyForObject:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
