@class NSString;

@interface RBImageQueueContents : NSObject <CARenderValue> {
    struct cf_ptr<_CAImageQueue *> { struct _CAImageQueue *_p; } _queue;
    struct refcounted_ptr<RB::Surface> { struct Surface *_p; } _surface;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)CA_prepareRenderValue;
- (id)replacementObjectForCoder:(id)a0;
- (void *)CA_copyRenderValue;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;
- (void *)CA_copyRenderValueWithColorspace:(struct CGColorSpace { } *)a0;

@end
