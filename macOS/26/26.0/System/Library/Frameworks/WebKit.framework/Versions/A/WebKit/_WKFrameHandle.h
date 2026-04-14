@class NSString;

@interface _WKFrameHandle : NSObject <WKObject, NSCopying, NSSecureCoding> {
    struct AlignedStorage<API::FrameHandle, 8UL> { struct Storage { unsigned char data[32]; } m_storage; } _frameHandle;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long frameID;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
