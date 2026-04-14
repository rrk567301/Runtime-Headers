@class NSImage, NSTextField;

@interface SCTTableCellView : NSTableCellView

@property NSTextField *categoryText;
@property (retain) NSImage *imageNormal;
@property (retain) NSImage *imageSelected;

- (void)setBackgroundStyle:(long long)a0;

@end
