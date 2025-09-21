@interface IMDRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (void)encodeWithCoder:(id)a0;
- (id)retain;
- (id)init;
- (unsigned long long)retainCount;
- (id)initWithCoder:(id)a0;
- (oneway void)release;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
