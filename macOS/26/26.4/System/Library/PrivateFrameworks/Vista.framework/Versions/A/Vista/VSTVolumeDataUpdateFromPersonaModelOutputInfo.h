@class IOSurface;
@protocol MTLCommandBuffer;

@interface VSTVolumeDataUpdateFromPersonaModelOutputInfo : NSObject

@property (retain, nonatomic) IOSurface *splatsSurface;
@property (nonatomic) const void *quiltSplatAttributeCoords;
@property (nonatomic) void /* unknown type, empty encoding */ quiltSize;
@property (retain, nonatomic) IOSurface *activeSplatIndices;
@property (nonatomic) unsigned long long numActiveSplats;
@property (nonatomic) void /* unknown type, empty encoding */ visibilitySphere;
@property (retain, nonatomic) id<MTLCommandBuffer> commandBuffer;

- (void).cxx_destruct;

@end
