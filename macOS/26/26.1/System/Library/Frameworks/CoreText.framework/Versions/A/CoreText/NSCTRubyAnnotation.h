@interface NSCTRubyAnnotation : NSRubyAnnotation

+ (Class)classForKeyedArchiver;
+ (Class)classForKeyedUnarchiver;

- (id)retain;
- (unsigned long long)hash;
- (oneway void)release;
- (unsigned long long)retainCount;
- (unsigned long long)_cfTypeID;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (BOOL)isEqual:(id)a0;

@end
