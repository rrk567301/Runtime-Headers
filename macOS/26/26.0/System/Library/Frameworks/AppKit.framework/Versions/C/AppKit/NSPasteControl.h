@class NSXPCConnection, NSRemoteView;

@interface NSPasteControl : NSControl <NSRemoteViewDelegate, NSTrustedPasteControlClientProtocol> {
    NSRemoteView *_remoteView;
    NSXPCConnection *_remoteConnection;
}

@property long long displayMode;
@property (readonly) BOOL shouldRetainExportedObject;

+ (Class)cellClass;
+ (Class)_controlClassSupportingNoCell;
+ (BOOL)_controlClassSupportsNoCell;
+ (Class)_defaultCellClass;

- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)a0;
- (id)objectValue;
- (void)setObjectValue:(id)a0;
- (id)exportedInterface;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAlignment:(long long)a0;
- (void)dealloc;
- (void)setLineBreakMode:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void)setControlSize:(unsigned long long)a0;
- (BOOL)isContinuous;
- (id)configuration;
- (id)initWithCoder:(id)a0;
- (void)setContinuous:(BOOL)a0;
- (void).cxx_destruct;
- (void)setBaseWritingDirection:(long long)a0;
- (void)_commonPasteControlInit;
- (void)_configureControl;
- (void)_initiateConnection;
- (id)_remoteProxy;
- (id)initWithDisplayMode:(long long)a0;
- (void)invokePasteControlActionWithToken:(id)a0;
- (void)performClick:(id)a0;
- (long long)sendActionOn:(unsigned long long)a0;
- (id)serviceViewControllerInterface;
- (void)setCell:(id)a0;

@end
