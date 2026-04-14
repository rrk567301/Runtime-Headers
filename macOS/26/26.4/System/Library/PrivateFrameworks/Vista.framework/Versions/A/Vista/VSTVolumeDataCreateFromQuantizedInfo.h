@interface VSTVolumeDataCreateFromQuantizedInfo : NSObject

@property (nonatomic) unsigned long long numSplats;
@property (nonatomic) unsigned long long shOrder;
@property (nonatomic) void /* unknown type, empty encoding */ boxMin;
@property (nonatomic) void /* unknown type, empty encoding */ boxMax;
@property (nonatomic) const struct vst_packed_half3 { void /* unknown type, blank encoding */ x0; void /* unknown type, blank encoding */ x1; void /* unknown type, blank encoding */ x2; } *splatPositions;
@property (nonatomic) const void *splatColors;
@property (nonatomic) const struct vst_packed_half3 { void /* unknown type, blank encoding */ x0; void /* unknown type, blank encoding */ x1; void /* unknown type, blank encoding */ x2; } *splatScales;
@property (nonatomic) const struct vst_packed_half4 { void /* unknown type, blank encoding */ x0; void /* unknown type, blank encoding */ x1; void /* unknown type, blank encoding */ x2; void /* unknown type, blank encoding */ x3; } *splatRotations;
@property (nonatomic) const struct vst_packed_half3 { void /* unknown type, blank encoding */ x0; void /* unknown type, blank encoding */ x1; void /* unknown type, blank encoding */ x2; } *splatSHs;
@property (nonatomic) const struct vst_packed_half4 { void /* unknown type, blank encoding */ x0; void /* unknown type, blank encoding */ x1; void /* unknown type, blank encoding */ x2; void /* unknown type, blank encoding */ x3; } *splatNormals;

@end
