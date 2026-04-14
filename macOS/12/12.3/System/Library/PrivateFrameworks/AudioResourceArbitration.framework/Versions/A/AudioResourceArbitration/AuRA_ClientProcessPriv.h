@class NSString;

@interface AuRA_ClientProcessPriv : NSObject <AuRA_ClientProcess> {
    struct weak_ptr<aura::ClientProcess> { struct ClientProcess *__ptr_; struct __shared_weak_count *__cntrl_; } _cppClientProcess;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
