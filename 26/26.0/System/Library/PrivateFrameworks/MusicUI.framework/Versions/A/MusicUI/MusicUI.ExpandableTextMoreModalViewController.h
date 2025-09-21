@interface MusicUI.ExpandableTextMoreModalViewController : NSViewController <NSTextViewDelegate> {
    void /* unknown type, empty encoding */ subtitle;
    void /* unknown type, empty encoding */ attributedString;
    void /* unknown type, empty encoding */ footer;
    void /* unknown type, empty encoding */ maxWindowHeight;
    void /* unknown type, empty encoding */ maximumNumberOfLinesInTitle;
    void /* unknown type, empty encoding */ footerDelegate;
}

- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
