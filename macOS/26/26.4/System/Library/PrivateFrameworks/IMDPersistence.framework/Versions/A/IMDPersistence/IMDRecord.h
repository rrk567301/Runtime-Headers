@interface IMDRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)hash;
- (id)init;
- (oneway void)release;
- (id)initWithCoder:(id)a0;
- (unsigned long long)retainCount;

@end
