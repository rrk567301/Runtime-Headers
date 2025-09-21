@protocol MTLCommandQueue;

@interface PTEffectDescriptor : NSObject <NSCopying>

@property (retain, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property char syncInitialization;
@property struct CGSize { double width; double height; } colorSize;
@property struct CGSize { double width; double height; } externalDisparitySize;
@property unsigned long long availableEffectTypes;
@property unsigned long long activeEffectType;
@property long long effectQuality;
@property char prewarmOnly;
@property char laguna;
@property char externalHandDetectionsEnabled;
@property char allowSkipOutColorBufferWrite;
@property char externalCamera;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
