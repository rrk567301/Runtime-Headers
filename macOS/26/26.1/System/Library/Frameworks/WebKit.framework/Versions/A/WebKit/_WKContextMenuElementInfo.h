@class NSString, _WKHitTestResult;

@interface _WKContextMenuElementInfo : NSObject <WKObject, NSCopying> {
    struct AlignedStorage<API::ContextMenuElementInfoMac, 16UL> { struct Storage { unsigned char data[928]; } m_storage; } _contextMenuElementInfoMac;
}

@property (readonly, copy, nonatomic) _WKHitTestResult *hitTestResult;
@property (readonly, copy, nonatomic) NSString *qrCodePayloadString;
@property (readonly, nonatomic) BOOL hasEntireImage;
@property (readonly, nonatomic) BOOL allowsFollowingLink;
@property (readonly, nonatomic) BOOL allowsFollowingImageURL;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
