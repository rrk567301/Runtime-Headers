@class NSNumber;

@interface GTCaptureArchiveHeapRestoreTextureSliceOverrideKey : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long slice;
@property unsigned long long mipLevel;
@property unsigned long long depthPlane;
@property (retain) NSNumber *plane;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSlice:(long long)a0 mipLevel:(long long)a1 depthPlane:(long long)a2 plane:(id)a3;

@end
