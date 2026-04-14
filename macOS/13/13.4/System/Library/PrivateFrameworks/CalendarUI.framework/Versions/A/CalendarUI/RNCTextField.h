@class RNCTableCellView;

@interface RNCTextField : NSTextField

@property (weak) RNCTableCellView *controller;
@property int style;

+ (id)fontForStyle:(int)a0;
+ (id)textColorForStyle:(int)a0;

- (void).cxx_destruct;
- (BOOL)drawsBackground;
- (id)initWithController:(id)a0;
- (BOOL)wantsLayer;

@end
