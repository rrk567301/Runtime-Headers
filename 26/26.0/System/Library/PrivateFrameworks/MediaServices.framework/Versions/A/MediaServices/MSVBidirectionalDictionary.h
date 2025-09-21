@class NSDictionary;

@interface MSVBidirectionalDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSDictionary *_keyToObjectDictionary;
    NSDictionary *_objectToKeyDictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)bidirectionalDictionary;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)allKeys;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)keyForObject:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
