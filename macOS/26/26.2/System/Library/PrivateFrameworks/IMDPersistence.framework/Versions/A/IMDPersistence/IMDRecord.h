@interface IMDRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)retain;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)retainCount;
- (BOOL)allowsWeakReference;
- (oneway void)release;
- (id)init;
- (BOOL)retainWeakReference;

@end
