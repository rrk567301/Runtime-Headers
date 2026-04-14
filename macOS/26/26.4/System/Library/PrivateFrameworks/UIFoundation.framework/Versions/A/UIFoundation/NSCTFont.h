@interface NSCTFont : UIFont

+ (id)fontWithDescriptor:(id)a0 size:(double)a1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (unsigned long long)_cfTypeID;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;

@end
