@interface NSNotificationCenter : NSObject {
    struct __CFNotificationCenter { } *_impl;
}

@property (class, readonly) NSNotificationCenter *defaultCenter;

+ (void)load;
+ (id)_defaultCenterWithoutCreating;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)init;
- (BOOL)isEmpty;
- (void)postNotificationName:(id)a0 object:(id)a1;
- (id)addObserverForName:(id)a0 object:(id)a1 queue:(id)a2 usingBlock:(id /* block */)a3;
- (void)removeObserver:(id)a0;
- (id)_initWithCFNotificationCenter:(struct __CFNotificationCenter { } *)a0;
- (unsigned long long)_addObserver:(id)a0 selector:(SEL)a1 name:(id)a2 object:(id)a3 options:(unsigned long long)a4;
- (void)_removeObserver:(unsigned long long)a0;
- (void)addObserver:(id)a0 selector:(SEL)a1 name:(id)a2 object:(id)a3;
- (void)removeObserver:(id)a0 name:(id)a1 object:(id)a2;
- (void)postNotification:(id)a0;
- (void)postNotificationName:(id)a0 object:(id)a1 userInfo:(id)a2;

@end
