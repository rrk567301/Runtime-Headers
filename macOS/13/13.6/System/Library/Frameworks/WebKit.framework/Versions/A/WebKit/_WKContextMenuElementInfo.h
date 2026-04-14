@class NSString, _WKHitTestResult;

@interface _WKContextMenuElementInfo : NSObject <WKObject, NSCopying> {
    struct ObjectStorage<API::ContextMenuElementInfoMac> { struct type { unsigned char __lx[336]; } data; } _contextMenuElementInfoMac;
}

@property (readonly, copy, nonatomic) _WKHitTestResult *hitTestResult;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
