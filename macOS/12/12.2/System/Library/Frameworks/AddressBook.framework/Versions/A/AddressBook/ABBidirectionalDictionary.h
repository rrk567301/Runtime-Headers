@class NSMutableDictionary;

@interface ABBidirectionalDictionary : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_keyToObjectDictionary;
    NSMutableDictionary *_objectToKeyDictionary;
}

+ (id)bidirectionalDictionary;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (id)keyForObject:(id)a0;

@end
