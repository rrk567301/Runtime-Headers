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

+ (id)newFenceFromDefaultServer;
+ (id)handleFromXPCRepresentation:(id)a0 error:(id *)a1;
+ (id)newFenceFromServer:(unsigned int)a0;
+ (id)handleForPort:(unsigned int)a0 fenceId:(unsigned long long)a1;
+ (id)handleFromXPCRepresentation:(id)a0;
+ (id)handleWithPort:(unsigned int)a0 data:(id)a1 error:(id *)a2;

- (void)encodeWithBlock:(id /* block */)a0;
- (void)invalidate;
- (id).cxx_construct;
- (void)accessMachPort:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)fenceId;
- (id)description;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)createXPCRepresentation;
- (unsigned int)copyPort;
- (id)init;

@end
