@class NSString;

@interface RBImageQueueContents : NSObject <NSSecureCoding, CARenderValue> {
    struct cf_ptr<_CAImageQueue *> { struct _CAImageQueue *_p; } _queue;
    struct refcounted_ptr<RB::Surface> { struct Surface *_p; } _surface;
    struct objc_ptr<id> { id _p; } _proxy;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)replacementObjectForCoder:(id)a0;
- (void *)CA_copyRenderValue;
- (void)CA_prepareRenderValue;
- (void *)CA_copyRenderValueWithColorspace:(struct CGColorSpace { } *)a0;

@end
