@interface NSCTFont : UIFont

+ (char)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)fontWithDescriptor:(id)a0 size:(double)a1;

- (oneway void)release;
- (char)allowsWeakReference;
- (id)retain;
- (unsigned long long)retainCount;
- (char)retainWeakReference;
- (unsigned long long)_cfTypeID;

@end
