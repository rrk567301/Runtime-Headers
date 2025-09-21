@interface NSCTRubyAnnotation : NSRubyAnnotation

+ (Class)classForKeyedUnarchiver;
+ (Class)classForKeyedArchiver;

- (unsigned long long)_cfTypeID;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (id)retain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
