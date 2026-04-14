@interface IOBluetoothObjectPushUIController : NSWindowController

+ (id)alloc;

- (void)stop;
- (id)init;
- (BOOL)isKindOfClass:(Class)a0;
- (void)setTitle:(id)a0;
- (id)getTitle;
- (void)runModal;
- (int)beginSheetModalForWindow:(id)a0 modalDelegate:(id)a1 didEndSelector:(SEL)a2 contextInfo:(void *)a3;
- (id)getDevice;
- (id)initObjectPushWithBluetoothDevice:(id)a0 withFiles:(id)a1 delegate:(id)a2;
- (BOOL)isTransferInProgress;
- (void)runPanel;
- (void)setIconImage:(id)a0;

@end
