@interface AVAudioSharedBufferToken : NSObject <NSSecureCoding> {
    struct mach_port { unsigned int m_mach_port; } taskToken;
    struct ObjectRef<__IOSurface *> { struct __IOSurface *mCFObject; } surface;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (struct ObjectRef<__IOSurface *> { struct __IOSurface *x0; })surface;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithSurface:(struct __IOSurface { } *)a0 taskToken:(unsigned int)a1;
- (struct _xpc_type_s { } *)surfaceXPCType;
- (struct mach_port { unsigned int x0; })taskToken;
- (struct _xpc_type_s { } *)taskTokenXPCType;

@end
