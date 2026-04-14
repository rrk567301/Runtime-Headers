@interface __NSPlaceholderFileSecurity : NSFileSecurity <NSCopying, NSCoding>

+ (BOOL)supportsSecureCoding;
+ (id)immutablePlaceholder;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)retain;
- (id)init;
- (oneway void)release;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)initWithFileSec:(struct _filesec { } *)a0;

@end
