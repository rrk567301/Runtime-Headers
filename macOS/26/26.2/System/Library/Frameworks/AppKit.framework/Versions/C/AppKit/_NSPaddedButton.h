@class NSArray;

@interface _NSPaddedButton : NSButton {
    struct CGSize { double width; double height; } _intrinsicContentSize;
}

@property (copy, nonatomic) NSArray *stringsForLength;

- (void)invalidateIntrinsicContentSize;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
