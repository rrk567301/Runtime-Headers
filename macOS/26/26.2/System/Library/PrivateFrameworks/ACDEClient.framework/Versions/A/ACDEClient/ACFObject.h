@interface ACFObject : NSObject <NSCoding, NSCopying>

+ (id)keys;
+ (id)keysForDescription;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)dealloc;

@end
