@class CANetworkBrowserImpl;

@interface CANetworkBrowserWindowController : NSWindowController {
    CANetworkBrowserImpl *_impl;
}

+ (BOOL)isAVBSupported;

- (void)windowDidLoad;
- (void)close;
- (id)init;
- (void)awakeFromNib;

@end
