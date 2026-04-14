@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface NWConcrete_nw_interface_use_observer : NSObject <OS_nw_interface_use_observer> {
    char *notification_name;
    struct retained_ptr<NSObject<OS_dispatch_queue> *> { NSObject<OS_dispatch_queue> *m_obj; } client_queue;
    struct retained_ptr<void (^)(bool)> { id /* block */ m_obj; } update_block;
    int notify_token;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
