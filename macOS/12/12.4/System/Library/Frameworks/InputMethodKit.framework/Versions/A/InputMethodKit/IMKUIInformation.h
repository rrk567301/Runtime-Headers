@class IMKInputController, IMKUICandidateTouchBarController, IMKUIWindowBasedCandidateController;

@interface IMKUIInformation : NSObject

@property (retain, nonatomic) IMKUICandidateTouchBarController *touchBarController;
@property (retain, nonatomic) IMKUIWindowBasedCandidateController *visibleOnscreenController;
@property (readonly, nonatomic) id textClient;
@property (readonly, nonatomic) IMKInputController *inputController;

+ (BOOL)isAppleInternal;
+ (BOOL)isTouchBarAvailable;
+ (id)sharedInformation;
+ (BOOL)isUsingSubclassingImplementation;
+ (double)maxWidthOfHandwritingCandidates;
+ (double)touchBarWidth;
+ (double)candidateSurfaceWidth;
+ (double)widthOfHandwritingCandidatesForTouchBarWidth:(double)a0 candidateSurfaceWidth:(double)a1;
+ (double)quickTypeBarWidth;

- (void)dealloc;

@end
