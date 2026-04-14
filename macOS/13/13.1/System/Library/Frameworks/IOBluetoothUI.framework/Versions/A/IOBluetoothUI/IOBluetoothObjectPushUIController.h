@interface IOBluetoothObjectPushUIController : NSWindowController

+ (id)alloc;

- (BOOL)isKindOfClass:(Class)a0;
- (id)init;
- (void)setTitle:(id)a0;
- (void)runModal;
- (void)stop;
- (int)beginSheetModalForWindow:(id)a0 modalDelegate:(id)a1 didEndSelector:(SEL)a2 contextInfo:(void *)a3;
- (id)getDevice;
- (id)getTitle;
- (void)runPanel;
- (void)setIconImage:(id)a0;
- (id)initObjectPushWithBluetoothDevice:(id)a0 withFiles:(id)a1 delegate:(id)a2;
- (BOOL)isTransferInProgress;

@end
