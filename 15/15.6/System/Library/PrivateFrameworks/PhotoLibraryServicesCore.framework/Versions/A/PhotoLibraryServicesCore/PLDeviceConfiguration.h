@interface PLDeviceConfiguration : NSObject

@property (nonatomic) char isRetina;
@property (nonatomic) char isPad;
@property (nonatomic) char isTV;
@property (nonatomic) char isWatch;
@property (nonatomic) char isMac;
@property (nonatomic) char supportsASTC;
@property (nonatomic) char isMigrationService;
@property (readonly, nonatomic) double screenScale;
@property (readonly, nonatomic) struct CGSize { double width; double height; } logicalScreenSize;
@property (readonly, nonatomic) char shouldUseNanoThumbnailFormats;
@property (readonly, nonatomic) unsigned long long logicalScreenPixelSize;

+ (id)defaultDeviceConfiguration;

- (id)description;
- (char)shouldUseNanoThumbnailFormats;
- (id)initWithLogicalScreenSize:(struct CGSize { double x0; double x1; })a0 screenScale:(double)a1 deviceClass:(void *)a2 supportsASTC:(char)a3 isMigrationService:(char)a4;

@end
