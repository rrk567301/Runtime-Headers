@interface NSCTFontCollection : NSMutableFontCollection

+ (Class)classForKeyedUnarchiver;
+ (Class)classForKeyedArchiver;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)allowsWeakReference;
- (BOOL)retainWeakReference;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)_cfTypeID;

@end
