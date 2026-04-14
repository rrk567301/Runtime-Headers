@class NSString;

@interface FI_TFPFSDomainProgress : NSObject <TNodeObserverProtocol> {
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _domainRootNode;
    struct shared_ptr<TNodeObserverCocoaBridge> { struct TNodeObserverCocoaBridge *__ptr_; struct __shared_weak_count *__cntrl_; } _nodeObserver;
}

@property (readonly, nonatomic) struct optional<double> { union { char x0; double x1; } x0; BOOL x1; } currentProgressPercentage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)stopObserving;
- (void)startObserving:(struct function<void (FI_TFPFSDomainProgress *, NSDictionary<NSString *,NSObject *> *)> { struct __value_func<void (FI_TFPFSDomainProgress *, NSDictionary<NSString *,NSObject *> *)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a0;
- (id)initWithNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)nodeObserver:(void *)a0 nodeChanged:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 inObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2 property:(unsigned int)a3;

@end
