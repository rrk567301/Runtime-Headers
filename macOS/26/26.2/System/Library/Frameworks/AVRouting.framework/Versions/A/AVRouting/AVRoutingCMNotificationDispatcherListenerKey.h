@class NSString, AVRoutingWeakReference;

@interface AVRoutingCMNotificationDispatcherListenerKey : NSObject <NSCopying> {
    AVRoutingWeakReference *_weakReferenceToListener;
    void /* function */ *_callback;
    NSString *_name;
    void *_object;
}

+ (id)listenerKeyWithWeakReferenceToListener:(id)a0 callback:(void /* function */ *)a1 name:(id)a2 object:(void *)a3;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithWeakReferenceToListener:(id)a0 callback:(void /* function */ *)a1 name:(id)a2 object:(void *)a3;
- (id)init;
- (void)dealloc;

@end
