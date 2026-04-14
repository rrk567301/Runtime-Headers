@interface ACFObject : NSObject <NSCoding, NSCopying>

+ (id)keys;
+ (id)keysForDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
