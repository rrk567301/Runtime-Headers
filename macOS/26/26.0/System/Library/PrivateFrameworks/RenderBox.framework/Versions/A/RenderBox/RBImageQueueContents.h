@class NSString;

@interface RBImageQueueContents : NSObject <CARenderValue> {
    struct cf_ptr<_CAImageQueue *> { struct _CAImageQueue *_p; } _queue;
    struct refcounted_ptr<RB::Surface> { struct Surface *_p; } _surface;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)replacementObjectForCoder:(id)a0;
- (void)dealloc;
- (void *)CA_copyRenderValue;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)CA_prepareRenderValue;
- (void *)CA_copyRenderValueWithColorspace:(struct CGColorSpace { } *)a0;

@end
