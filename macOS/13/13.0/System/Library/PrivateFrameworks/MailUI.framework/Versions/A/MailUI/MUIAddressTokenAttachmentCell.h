@class NSColor;

@interface MUIAddressTokenAttachmentCell : NSTokenAttachmentCell

@property (nonatomic) unsigned long long attachmentCellColor;
@property BOOL neverShowSeparator;
@property (retain, nonatomic) NSColor *foregroundColor;

+ (id)colorForExternalDomain;
+ (id)colorForError;
+ (id)colorForWarning;

- (void).cxx_destruct;
- (id)_textAttributes;
- (id)tokenTintColor;
- (void)drawTokenWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (BOOL)_finalizeStyleTextOptions:(id)a0;

@end
