@interface ACFObject : NSObject <NSCoding, NSCopying>

+ (id)keys;
+ (id)keysForDescription;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
