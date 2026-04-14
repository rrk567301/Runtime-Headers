@interface __NSPlaceholderFileSecurity : NSFileSecurity <NSCopying, NSCoding>

+ (id)immutablePlaceholder;
+ (BOOL)supportsSecureCoding;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithFileSec:(struct _filesec { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
