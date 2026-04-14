@interface NSCTFontCollection : NSMutableFontCollection

+ (Class)classForKeyedUnarchiver;
+ (Class)classForKeyedArchiver;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (unsigned long long)_cfTypeID;

@end
