@interface NSCTFont : UIFont

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)fontWithDescriptor:(id)a0 size:(double)a1;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (unsigned long long)_cfTypeID;

@end
