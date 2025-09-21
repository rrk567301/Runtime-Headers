@class NSArray;

@interface _NSPaddedButton : NSButton {
    struct CGSize { double width; double height; } _intrinsicContentSize;
}

@property (copy, nonatomic) NSArray *stringsForLength;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
