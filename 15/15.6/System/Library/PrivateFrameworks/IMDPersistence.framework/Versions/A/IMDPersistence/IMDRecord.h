@interface IMDRecord : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (oneway void)release;
- (char)allowsWeakReference;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (char)retainWeakReference;

@end
