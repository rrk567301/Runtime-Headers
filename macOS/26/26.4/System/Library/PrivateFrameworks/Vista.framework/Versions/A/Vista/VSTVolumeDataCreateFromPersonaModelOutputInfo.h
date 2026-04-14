@class IOSurface;

@interface VSTVolumeDataCreateFromPersonaModelOutputInfo : NSObject

@property (nonatomic) long long packingMethod;
@property (retain, nonatomic) IOSurface *splatsSurface;
@property (nonatomic) const void *quiltSplatAttributeCoords;
@property (nonatomic) void /* unknown type, empty encoding */ quiltSize;
@property (nonatomic) IOSurface *splatNormals;
@property (retain, nonatomic) IOSurface *activeSplatIndices;
@property (nonatomic) unsigned long long numActiveSplats;

- (void).cxx_destruct;
- (id)init;

@end
