@interface NSCTFont : UIFont

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)fontWithDescriptor:(id)a0 size:(double)a1;

- (unsigned long long)_cfTypeID;
- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)allowsWeakReference;
- (oneway void)release;
- (BOOL)retainWeakReference;

@end
