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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void)dealloc;

@end
