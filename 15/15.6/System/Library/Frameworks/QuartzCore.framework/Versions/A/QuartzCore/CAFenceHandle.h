@interface CAFenceHandle : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _handle_name;
    unsigned long long _fence_name;
    unsigned int _port;
    struct Mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _m; } _invalidation_mutex;
    struct SpinLock { struct { int x; } _l; } _lock;
    char _invalidated;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, getter=isUsable) char usable;
@property (readonly, getter=isInvalidated) char invalidated;

+ (id)handleFromXPCRepresentation:(id)a0;
+ (id)newFenceFromDefaultServer;
+ (id)handleForPort:(unsigned int)a0 fenceId:(unsigned long long)a1;
+ (id)newFenceFromServer:(unsigned int)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (id).cxx_construct;
- (void)accessMachPort:(id /* block */)a0;
- (unsigned long long)fenceId;
- (unsigned int)copyPort;
- (id)createXPCRepresentation;

@end
