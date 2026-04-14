@class IOSurface;

@interface VSTSplatTextureDataDump : VSTSplatVersionDump

@property (retain, nonatomic) IOSurface *surface;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)metadata;
- (id)initWithCoder:(id)a0;

@end
