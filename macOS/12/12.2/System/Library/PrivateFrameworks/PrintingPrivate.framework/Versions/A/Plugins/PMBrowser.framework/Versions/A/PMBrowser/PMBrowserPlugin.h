@class NSView, NSMutableArray, PrinterInspector;

@interface PMBrowserPlugin : NSObject <PMBrowserPluginProtocol> {
    NSView *_printersView;
    PrinterInspector *_printersInspector;
    NSMutableArray *_driverSpecifications;
}

+ (id)instantiatePlugin;

- (void)dealloc;
- (id)view;
- (void)awakeFromNib;
- (void)startBrowsing;
- (void)stopBrowsing;
- (void)setDriverSpecifications:(id)a0;
- (id)driverSpecifications;
- (id)printersView;
- (id)printersInspector;

@end
