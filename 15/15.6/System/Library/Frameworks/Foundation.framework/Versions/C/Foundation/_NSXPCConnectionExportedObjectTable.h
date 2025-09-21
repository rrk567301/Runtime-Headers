@class NSObject, NSXPCInterface;
@protocol OS_dispatch_group;

@interface _NSXPCConnectionExportedObjectTable : NSObject {
    id _proxy1Object;
    NSXPCInterface *_proxy1Interface;
    struct __CFDictionary { } *_proxyNumberToObject;
    struct __CFDictionary { } *_proxyNumberToInterface;
    struct __CFDictionary { } *_objectToProxyNumber;
    NSObject<OS_dispatch_group> *_replyGroup;
    unsigned long long _next;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _valid;
}

- (void)dealloc;
- (id)description;
- (id)init;

@end
