@interface NSCTFontCollection : NSMutableFontCollection

+ (Class)classForKeyedUnarchiver;
+ (Class)classForKeyedArchiver;

- (unsigned long long)_cfTypeID;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (BOOL)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)hash;
- (oneway void)release;
- (unsigned long long)retainCount;

@end
