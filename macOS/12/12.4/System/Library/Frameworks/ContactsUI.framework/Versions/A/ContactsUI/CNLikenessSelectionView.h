@class NSImage;

@interface CNLikenessSelectionView : NSView

@property (retain, nonatomic) NSImage *selectionImage;

- (id)init;
- (void).cxx_destruct;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;

@end
