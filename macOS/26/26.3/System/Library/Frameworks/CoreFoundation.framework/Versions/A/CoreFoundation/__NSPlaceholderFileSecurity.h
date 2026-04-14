@interface __NSPlaceholderFileSecurity : NSFileSecurity <NSCopying, NSCoding>

+ (BOOL)supportsSecureCoding;
+ (id)immutablePlaceholder;

- (unsigned long long)retainCount;
- (id)retain;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFileSec:(struct _filesec { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (oneway void)release;

@end
