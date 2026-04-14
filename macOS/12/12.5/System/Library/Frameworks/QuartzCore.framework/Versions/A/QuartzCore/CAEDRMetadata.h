@interface CAEDRMetadata : NSObject {
    struct _CAEDRMetadataPrivate { struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned int x8; unsigned int x9; } x0; struct { unsigned short x0; unsigned short x1; } x1; BOOL x2; float x3; } *_priv;
}

@property (class, readonly, retain) CAEDRMetadata *HLGMetadata;

+ (id)HDR10MetadataWithDisplayInfo:(id)a0 contentInfo:(id)a1 opticalOutputScale:(float)a2;
+ (id)HDR10MetadataWithMinLuminance:(float)a0 maxLuminance:(float)a1 opticalOutputScale:(float)a2;
+ (void)setMetadata:(id)a0 onSurface:(struct __IOSurface { } *)a1;

- (void)dealloc;
- (id)description;
- (id)initWithSEIMasteringDisplayData:(id)a0 contentLightLevelData:(id)a1 opticalOutputScale:(float)a2;
- (id)initWithMasteringDisplayMinNits:(float)a0 maxNits:(float)a1 opticalOutputScale:(float)a2;
- (id)initWithBT2100HLG;
- (id)initWithSEIMasteringDisplayData:(id)a0 contentLightLevelData:(id)a1;

@end
