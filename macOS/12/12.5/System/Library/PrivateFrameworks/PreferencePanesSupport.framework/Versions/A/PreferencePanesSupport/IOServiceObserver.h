@interface IOServiceObserver : NSObject {
    unsigned int mIOConnectIterator;
    unsigned int mIOTerminateIterator;
}

@property (readonly) id target;
@property (readonly) SEL selector;

+ (struct IONotificationPort { } *)_openNotificationPort;
+ (void)_closeNotificationPort;
+ (id)observerForService:(struct __CFDictionary { } *)a0 target:(id)a1 selector:(SEL)a2;
+ (id)observerForConnectService:(struct __CFDictionary { } *)a0 target:(id)a1 selector:(SEL)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)armIterators;
- (id)initForService:(struct __CFDictionary { } *)a0 target:(id)a1 selector:(SEL)a2;
- (id)initForConnectService:(struct __CFDictionary { } *)a0 target:(id)a1 selector:(SEL)a2;
- (unsigned int)connectIterator;
- (unsigned int)terminateIterator;

@end
