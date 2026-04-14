@interface WebUndefined : NSObject <NSCoding, NSCopying>

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)undefined;

- (id)retain;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)retainCount;
- (id)autorelease;
- (id)description;
- (oneway void)release;
- (void)dealloc;

@end
