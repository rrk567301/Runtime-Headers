@class NSString;

@interface AVAssetVideoTrackPlan : AVAssetTrackPlan

@property (readonly) NSString *videoCodecType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithVideoCodecType:(id)a0 encoderSpecification:(id)a1 mediaType:(id)a2 segmentConfigurations:(id)a3 assemblyTrackID:(int)a4;
- (BOOL)requiresVideoCompression;

@end
