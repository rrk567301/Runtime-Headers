@interface __NSPlaceholderFileSecurity : NSFileSecurity <NSCopying, NSCoding>

+ (BOOL)supportsSecureCoding;
+ (id)immutablePlaceholder;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)retain;
- (id)init;
- (unsigned long long)retainCount;
- (id)initWithCoder:(id)a0;
- (oneway void)release;
- (id)initWithFileSec:(struct _filesec { } *)a0;

@end
