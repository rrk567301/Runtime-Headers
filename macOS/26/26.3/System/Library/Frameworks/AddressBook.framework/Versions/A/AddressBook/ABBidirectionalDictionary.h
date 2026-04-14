@class NSMutableDictionary;

@interface ABBidirectionalDictionary : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_keyToObjectDictionary;
    NSMutableDictionary *_objectToKeyDictionary;
}

+ (id)bidirectionalDictionary;

- (id)objectForKey:(id)a0;
- (id)description;
- (id)init;
- (id)keyForObject:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
