@class NSDate, NSString, NSFont;

@interface LoginUIKit.LUI2GlassTextView : NSView {
    void /* unknown type, empty encoding */ _model;
    void /* unknown type, empty encoding */ _glassTextView;
    void /* unknown type, empty encoding */ _firstBaselineOffsetFromTop;
    void /* unknown type, empty encoding */ _font;
}

@property (class, nonatomic, readonly) double animationTimeAdjustment;

@property (nonatomic) long long alignment;
@property (nonatomic, readonly) double firstBaselineOffsetFromTop;
@property (nonatomic, retain) NSFont *font;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, copy) NSString *numberingSystem;
@property (nonatomic) BOOL shows24HourTime;

- (void)mouseUp:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setDisplayFont:(id)a0 size:(double)a1 weight:(double)a2;

@end
