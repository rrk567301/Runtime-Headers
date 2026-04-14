@class NSNumber;

@interface GTCaptureArchiveHeapRestoreTextureSliceOverrideKey : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long slice;
@property unsigned long long mipLevel;
@property unsigned long long depthPlane;
@property (retain) NSNumber *plane;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithSlice:(long long)a0 mipLevel:(long long)a1 depthPlane:(long long)a2 plane:(id)a3;

@end
