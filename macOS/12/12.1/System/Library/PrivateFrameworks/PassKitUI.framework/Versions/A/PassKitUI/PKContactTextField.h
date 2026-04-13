@class NSImage;

@interface PKContactTextField : PKAutocompleteTextField

@property (retain, nonatomic) NSImage *errorImage;
@property (nonatomic) BOOL needsPlaceholder;
@property (nonatomic) BOOL hasError;

+ (Class)cellClass;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textDidChange:(id)a0;
- (void)_initProperties;

@end
