@interface NSCTFont : UIFont

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)fontWithDescriptor:(id)a0 size:(double)a1;

- (unsigned long long)retainCount;
- (unsigned long long)_cfTypeID;
- (id)retain;
- (BOOL)allowsWeakReference;
- (BOOL)retainWeakReference;
- (oneway void)release;

@end
