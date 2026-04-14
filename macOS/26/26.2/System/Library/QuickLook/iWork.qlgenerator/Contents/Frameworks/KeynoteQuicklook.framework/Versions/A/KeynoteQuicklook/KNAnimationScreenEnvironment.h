@protocol MTLDevice;

@interface KNAnimationScreenEnvironment : NSObject <NSCopying>

@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (nonatomic) BOOL shouldDisableHDRSupport;
@property (nonatomic) unsigned int displayID;
@property (readonly, nonatomic) id<MTLDevice> metalDevice;
@property (nonatomic) BOOL hasActiveWindowSharingSession;
@property (nonatomic) double pixelAspectRatio;
@property (readonly, nonatomic) double currentEDRHeadroom;
@property (readonly, nonatomic) BOOL supportsHDR;
@property (readonly, nonatomic) BOOL isPQReferenceMode;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)dealloc;

@end
