@interface NSCTRubyAnnotation : NSRubyAnnotation

+ (Class)classForKeyedArchiver;
+ (Class)classForKeyedUnarchiver;

- (oneway void)release;
- (char)allowsWeakReference;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (char)retainWeakReference;
- (unsigned long long)_cfTypeID;

@end
