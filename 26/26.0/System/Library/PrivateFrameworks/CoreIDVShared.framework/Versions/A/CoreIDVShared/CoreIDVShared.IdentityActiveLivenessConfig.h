@class NSString;

@interface CoreIDVShared.IdentityActiveLivenessConfig : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ gestureSequence;
    void /* unknown type, empty encoding */ minRequiredGestureCount;
    void /* unknown type, empty encoding */ timeToSkipOption;
    void /* unknown type, empty encoding */ timeToSkipAccessible;
    void /* unknown type, empty encoding */ timeToAlert;
    void /* unknown type, empty encoding */ timeToAlertAccessible;
    void /* unknown type, empty encoding */ maxRetakeCount;
    void /* unknown type, empty encoding */ sessionTimeout;
    void /* unknown type, empty encoding */ faceOutOfBoundFrames;
    void /* unknown type, empty encoding */ gestureCompletionDelay;
    void /* unknown type, empty encoding */ tutorialVideoDelay;
    void /* unknown type, empty encoding */ tutorialVideoDuration;
    void /* unknown type, empty encoding */ tutorialResumeDelay;
    void /* unknown type, empty encoding */ gestureDetectedSuccessDuration;
    void /* unknown type, empty encoding */ lastGestureExtraFrameDuration;
    void /* unknown type, empty encoding */ requiresGoodLux;
    void /* unknown type, empty encoding */ enablePrintReplay;
    void /* unknown type, empty encoding */ enableIDMatching;
    void /* unknown type, empty encoding */ requireSelfie;
    void /* unknown type, empty encoding */ enableAutoFlash;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
