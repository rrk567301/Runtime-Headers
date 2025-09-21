@interface NSCTFont : UIFont

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)fontWithDescriptor:(id)a0 size:(double)a1;

- (unsigned long long)_cfTypeID;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (id)retain;
- (unsigned long long)retainCount;
- (oneway void)release;

@end
