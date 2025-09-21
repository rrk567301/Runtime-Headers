@class NSString, NSObject;

@interface ODDPointPropertySet : NSObject {
    NSString *mLayoutTypeId;
    NSString *mPresentationName;
    NSString *mPresentationStyleLabel;
    int mPresentationStyleIndex;
    int mPresentationStyleCount;
    NSObject *mPresentationAssociatedId;
    char mCustomVerticalFlip;
    double mCustomScaleX;
    double mCustomScaleY;
    double mCustomOffsetX;
    double mCustomOffsetY;
}

- (id)description;
- (void).cxx_destruct;
- (double)customOffsetX;
- (double)customOffsetY;
- (double)customScaleX;
- (double)customScaleY;
- (char)customVerticalFlip;
- (id)layoutTypeId;
- (id)presentationAssociatedId;
- (id)presentationName;
- (int)presentationStyleCount;
- (int)presentationStyleIndex;
- (id)presentationStyleLabel;
- (void)setCustomOffsetX:(double)a0;
- (void)setCustomOffsetY:(double)a0;
- (void)setCustomScaleX:(double)a0;
- (void)setCustomScaleY:(double)a0;
- (void)setCustomVerticalFlip:(char)a0;
- (void)setLayoutTypeId:(id)a0;
- (void)setPresentationAssociatedId:(id)a0;
- (void)setPresentationName:(id)a0;
- (void)setPresentationStyleCount:(int)a0;
- (void)setPresentationStyleIndex:(int)a0;
- (void)setPresentationStyleLabel:(id)a0;

@end
