@class NSString;

@interface AMPDesktopUI.LibraryAboutLockup : NSView {
    void /* function */ title;
    void /* function */ body;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *body;

+ (id)lockup;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
