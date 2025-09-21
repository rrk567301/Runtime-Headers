@class CANetworkBrowserImpl;

@interface CANetworkBrowserWindowController : NSWindowController {
    CANetworkBrowserImpl *_impl;
}

+ (char)isAVBSupported;

- (id)init;
- (void)close;
- (void)awakeFromNib;
- (void)windowDidLoad;

@end
