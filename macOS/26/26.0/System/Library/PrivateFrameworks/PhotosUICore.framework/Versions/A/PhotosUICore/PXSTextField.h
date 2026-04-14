@class NSString;

@interface PXSTextField : NSTextField

@property (copy, nonatomic) NSString *text;
@property (nonatomic) double fontSize;
@property (nonatomic, getter=isEmphasized) BOOL emphasized;

+ (id)sharedNumberFormatter;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFont:(id)a0;
- (void).cxx_destruct;

@end
