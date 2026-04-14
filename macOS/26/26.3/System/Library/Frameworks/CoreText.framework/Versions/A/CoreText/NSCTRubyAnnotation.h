@interface NSCTRubyAnnotation : NSRubyAnnotation

+ (Class)classForKeyedArchiver;
+ (Class)classForKeyedUnarchiver;

- (unsigned long long)retainCount;
- (unsigned long long)_cfTypeID;
- (id)retain;
- (BOOL)allowsWeakReference;
- (BOOL)retainWeakReference;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (oneway void)release;

@end
