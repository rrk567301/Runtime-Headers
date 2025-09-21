@class NSString;

@interface VoiceControlUI.VCUIBadgedTextOverlayController_Swift : NSViewController {
    void /* unknown type, empty encoding */ hostingController;
    void /* unknown type, empty encoding */ _text;
    void /* unknown type, empty encoding */ _type;
    void /* unknown type, empty encoding */ _focusRect;
    void /* unknown type, empty encoding */ _startIndex;
    void /* unknown type, empty encoding */ _popoverShowing;
}

@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long type;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } focusRect;
@property (nonatomic) long long startIndex;
@property (nonatomic) BOOL popoverShowing;
@property (nonatomic) long long zOrder;
@property (nonatomic) BOOL isOverlay;

+ (id)textSegmentModelsForText:(id)a0 type:(long long)a1 start:(long long)a2;

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)displayedTextSegmentModels;

@end
