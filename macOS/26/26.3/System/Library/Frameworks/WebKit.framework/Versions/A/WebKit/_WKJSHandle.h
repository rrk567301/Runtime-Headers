@class NSString, WKContentWorld, WKFrameInfo;

@interface _WKJSHandle : NSObject <WKObject, NSCopying> {
    struct AlignedStorage<API::JSHandle, 16UL> { struct Storage { unsigned char data[416]; } m_storage; } _ref;
}

@property (readonly, copy, nonatomic) WKFrameInfo *frame;
@property (readonly, weak, nonatomic) WKContentWorld *world;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)windowFrameInfo:(id /* block */)a0;

@end
