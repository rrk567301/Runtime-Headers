@interface CAFenceHandle : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _handle_name;
    unsigned long long _fence_name;
    unsigned int _port;
    struct Mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _m; } _invalidation_mutex;
    struct SpinLock { struct { int x; } _l; } _lock;
    BOOL _invalidated;
    BOOL _invalidate_on_dealloc;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, getter=isUsable) BOOL usable;
@property (readonly, getter=isInvalidated) BOOL invalidated;

+ (id)handleWithPort:(unsigned int)a0 data:(id)a1 error:(id *)a2;
+ (id)newFenceFromServer:(unsigned int)a0;
+ (id)handleForPort:(unsigned int)a0 fenceId:(unsigned long long)a1;
+ (id)handleFromXPCRepresentation:(id)a0;
+ (id)newFenceFromDefaultServer;
+ (id)handleFromXPCRepresentation:(id)a0 error:(id *)a1;

- (unsigned long long)fenceId;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)createXPCRepresentation;
- (unsigned int)copyPort;
- (id)description;
- (void)accessMachPort:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)encodeWithBlock:(id /* block */)a0;

@end
