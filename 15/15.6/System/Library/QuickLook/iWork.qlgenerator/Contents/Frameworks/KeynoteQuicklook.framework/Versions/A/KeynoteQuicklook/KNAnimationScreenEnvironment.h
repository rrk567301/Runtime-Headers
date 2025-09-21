@protocol MTLDevice;

@interface KNAnimationScreenEnvironment : NSObject <NSCopying>

@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (nonatomic) char shouldDisableHDRSupport;
@property (nonatomic) unsigned int displayID;
@property (readonly, nonatomic) id<MTLDevice> metalDevice;
@property (nonatomic) char hasActiveWindowSharingSession;
@property (nonatomic) double pixelAspectRatio;
@property (readonly, nonatomic) double currentEDRHeadroom;
@property (readonly, nonatomic) char supportsHDR;
@property (readonly, nonatomic) char isPQReferenceMode;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;

@end
