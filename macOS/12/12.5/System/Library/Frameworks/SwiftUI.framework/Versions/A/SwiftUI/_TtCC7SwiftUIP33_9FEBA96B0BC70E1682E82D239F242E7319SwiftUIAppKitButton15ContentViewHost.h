@protocol NSContentStyle;

@interface _TtCC7SwiftUIP33_9FEBA96B0BC70E1682E82D239F242E7319SwiftUIAppKitButton15ContentViewHost : NSView {
    void /* unknown type, empty encoding */ contentStyleSignal;
    void /* unknown type, empty encoding */ ignoreContentStyleUpdates;
    void /* unknown type, empty encoding */ icsHeight;
    void /* unknown type, empty encoding */ firstBaselineOffset;
}

@property (nonatomic, retain) id<NSContentStyle> contentStyle;
@property (nonatomic) BOOL flipped;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (id)initWithCoder:(id)a0;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct { double x0; double x1; })_baselineOffsetsAtSize:(struct CGSize { double x0; double x1; })a0;

@end
