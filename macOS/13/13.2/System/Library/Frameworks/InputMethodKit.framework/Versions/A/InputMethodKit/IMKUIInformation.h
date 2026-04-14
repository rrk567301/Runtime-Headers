@class IMKInputController, IMKUICandidateTouchBarController, IMKUIWindowBasedCandidateController;

@interface IMKUIInformation : NSObject

@property (retain, nonatomic) IMKUICandidateTouchBarController *touchBarController;
@property (retain, nonatomic) IMKUIWindowBasedCandidateController *visibleOnscreenController;
@property (readonly, nonatomic) id textClient;
@property (readonly, nonatomic) IMKInputController *inputController;

+ (BOOL)isAppleInternal;
+ (BOOL)isTouchBarAvailable;
+ (BOOL)isUsingSubclassingImplementation;
+ (BOOL)isCJPerformanceEnabled;
+ (id)sharedInformation;
+ (double)candidateSurfaceWidth;
+ (double)quickTypeBarWidth;
+ (double)touchBarWidth;
+ (double)widthOfHandwritingCandidatesForTouchBarWidth:(double)a0 candidateSurfaceWidth:(double)a1;
+ (double)maxWidthOfHandwritingCandidates;

- (void)dealloc;

@end
