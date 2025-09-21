@class NSDate;

@interface CXAnswerCallAction : CXCallAction {
    struct CGSize { double width; double height; } _localPortraitAspectRatio;
    struct CGSize { double width; double height; } _localLandscapeAspectRatio;
}

@property (copy, nonatomic) NSDate *dateConnected;
@property (nonatomic) char downgradeToAudio;
@property (nonatomic) char pauseVideoToStart;
@property (nonatomic) char screening;

+ (char)supportsSecureCoding;
+ (double)timeout;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)fulfill;
- (id)customDescription;
- (struct CGSize { double x0; double x1; })localLandscapeAspectRatio;
- (struct CGSize { double x0; double x1; })localPortraitAspectRatio;
- (void)setLocalLandscapeAspectRatio:(struct CGSize { double x0; double x1; })a0;
- (void)setLocalPortraitAspectRatio:(struct CGSize { double x0; double x1; })a0;
- (void)fulfillWithDateConnected:(id)a0;
- (void)updateAsFulfilledWithDateConnected:(id)a0;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
