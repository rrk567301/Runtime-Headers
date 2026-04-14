@class NSString, _PASLock, GDXPCViewService;

@interface GDRemoteViewAccessRequester : NSObject <GDViewAccessRequester> {
    _PASLock *_lock;
    GDXPCViewService *_xpcService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)currentProcessIsSandboxed;

@end
