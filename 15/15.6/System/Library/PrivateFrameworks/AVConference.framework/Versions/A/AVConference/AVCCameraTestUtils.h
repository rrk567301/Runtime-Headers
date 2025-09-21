@interface AVCCameraTestUtils : NSObject

+ (char)isCenterStageActive;
+ (char)isCameraAvailable;
+ (char)performReaction;
+ (id)defaultCameraUID;
+ (char)expectedGFTResolutionForDevice:(id)a0 ratio:(struct CGSize { double x0; double x1; } *)a1;
+ (char)expectedPreviewResolutionForDevice:(id)a0 width:(int *)a1 height:(int *)a2;
+ (char)findExpectedFramerate:(float *)a0 forDevice:(id)a1;
+ (char)isCameraAvailable:(long long)a0;
+ (char)isCenterStageAvailable;
+ (char)isReactionAvailable;

@end
