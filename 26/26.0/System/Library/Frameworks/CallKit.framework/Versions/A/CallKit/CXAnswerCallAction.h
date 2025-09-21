@class NSDate;

@interface CXAnswerCallAction : CXCallAction {
    struct CGSize { double width; double height; } _localPortraitAspectRatio;
    struct CGSize { double width; double height; } _localLandscapeAspectRatio;
}

@property (copy, nonatomic) NSDate *dateConnected;
@property (nonatomic) BOOL downgradeToAudio;
@property (nonatomic) BOOL pauseVideoToStart;
@property (nonatomic) BOOL screening;
@property (nonatomic) BOOL receptionist;

+ (BOOL)supportsSecureCoding;
+ (double)timeout;

- (id)customDescription;
- (void)encodeWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })localPortraitAspectRatio;
- (struct CGSize { double x0; double x1; })localLandscapeAspectRatio;
- (id)initWithCoder:(id)a0;
- (void)setLocalLandscapeAspectRatio:(struct CGSize { double x0; double x1; })a0;
- (void)setLocalPortraitAspectRatio:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)fulfill;
- (void)fulfillWithDateConnected:(id)a0;
- (void)updateAsFulfilledWithDateConnected:(id)a0;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
