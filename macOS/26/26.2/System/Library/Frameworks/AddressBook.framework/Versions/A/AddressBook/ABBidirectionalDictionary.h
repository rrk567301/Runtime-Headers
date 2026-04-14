@class NSMutableDictionary;

@interface ABBidirectionalDictionary : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_keyToObjectDictionary;
    NSMutableDictionary *_objectToKeyDictionary;
}

+ (id)bidirectionalDictionary;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)keyForObject:(id)a0;
- (id)description;
- (id)objectForKey:(id)a0;
- (id)init;

@end
