@class NSString, NSObject;
@protocol OS_dispatch_group;

@interface _SwiftUIProxyImage : NSObject <NSSecureCoding, CARenderValue> {
    id _image;
    struct CGColorSpace { } *_color_space;
    NSObject<OS_dispatch_group> *_group;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)replacementObjectForCoder:(id)a0;
- (void)dealloc;
- (void *)CA_copyRenderValue;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)CA_prepareRenderValue;
- (void *)CA_copyRenderValueWithColorspace:(struct CGColorSpace { } *)a0;

@end
