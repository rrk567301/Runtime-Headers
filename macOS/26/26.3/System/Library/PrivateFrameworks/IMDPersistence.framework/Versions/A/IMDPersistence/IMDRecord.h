@interface IMDRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (unsigned long long)retainCount;
- (id)retain;
- (BOOL)allowsWeakReference;
- (id)init;
- (BOOL)retainWeakReference;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (oneway void)release;

@end
