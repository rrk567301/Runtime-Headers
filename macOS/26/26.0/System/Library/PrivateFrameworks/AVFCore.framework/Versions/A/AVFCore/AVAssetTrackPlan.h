@class NSString, NSArray;

@interface AVAssetTrackPlan : NSObject

@property (readonly) int assemblyTrackID;
@property (readonly) NSString *mediaType;
@property (readonly) NSArray *segmentConfigurations;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithMediaType:(id)a0 segmentConfigurations:(id)a1 assemblyTrackID:(int)a2;
- (BOOL)requiresVideoCompression;

@end
