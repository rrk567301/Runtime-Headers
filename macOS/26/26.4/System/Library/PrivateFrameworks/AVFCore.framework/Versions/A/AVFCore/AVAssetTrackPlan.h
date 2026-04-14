@class NSString, NSArray;

@interface AVAssetTrackPlan : NSObject

@property (readonly) int assemblyTrackID;
@property (readonly) NSString *mediaType;
@property (readonly) NSArray *segmentConfigurations;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithMediaType:(id)a0 segmentConfigurations:(id)a1 assemblyTrackID:(int)a2;
- (BOOL)requiresVideoCompression;

@end
