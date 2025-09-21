@interface PACropInteractionContext : NSObject

@property (readonly, nonatomic) char shouldPreserveTargetArea;
@property (readonly, nonatomic) char shouldUpdateTargetAreaOnBeginInteractive;
@property (readonly, nonatomic) char shouldUpdateViewportOnEndInteractive;
@property (nonatomic) unsigned long long keyModificationMask;

+ (id)sharedCropInteractionContext;
+ (id)sharedCropPerspectiveContext;
+ (id)sharedCropRotationContext;
+ (id)sharedCropZoomContext;

@end
