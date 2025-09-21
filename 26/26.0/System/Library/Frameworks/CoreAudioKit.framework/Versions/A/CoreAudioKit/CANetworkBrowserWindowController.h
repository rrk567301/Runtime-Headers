@class CANetworkBrowserImpl;

@interface CANetworkBrowserWindowController : NSWindowController {
    CANetworkBrowserImpl *_impl;
}

+ (BOOL)isAVBSupported;

- (void)windowDidLoad;
- (id)init;
- (void)close;
- (void)awakeFromNib;

@end
