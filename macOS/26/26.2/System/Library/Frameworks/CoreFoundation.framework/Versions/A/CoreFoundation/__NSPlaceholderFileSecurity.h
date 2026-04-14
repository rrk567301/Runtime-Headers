@interface __NSPlaceholderFileSecurity : NSFileSecurity <NSCopying, NSCoding>

+ (BOOL)supportsSecureCoding;
+ (id)immutablePlaceholder;

- (id)retain;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFileSec:(struct _filesec { } *)a0;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)init;
- (void)dealloc;

@end
