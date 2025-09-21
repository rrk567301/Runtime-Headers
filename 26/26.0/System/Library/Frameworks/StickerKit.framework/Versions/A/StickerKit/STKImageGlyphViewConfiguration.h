@interface STKImageGlyphViewConfiguration : NSObject {
    void /* unknown type, empty encoding */ userInterfaceIdiom;
}

@property (nonatomic) double keyboardWidth;
@property (nonatomic) BOOL isKeyboardMinorEdgeWidth;
@property (nonatomic) BOOL isInPopover;
@property (nonatomic) BOOL doesSupportImageGlyph;
@property (nonatomic) double scale;
@property (nonatomic) double screenToNativeScaleRatio;
@property (nonatomic) BOOL doesSupportStickersApp;
@property (nonatomic) BOOL isRunningInGenmoji;

- (id)init;

@end
