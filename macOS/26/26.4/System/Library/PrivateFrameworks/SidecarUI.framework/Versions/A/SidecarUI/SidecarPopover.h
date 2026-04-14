@class SidecarRequest;

@interface SidecarPopover : NSPopover {
    SidecarRequest *_request;
}

+ (id)sidecarPopoverWithRequest:(id)a0;

- (void)cancel:(id)a0;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)cancelOperation:(id)a0;
- (id)window;
- (long long)runModal;
- (void)performClose:(id)a0;
- (void)popoverWillClose:(id)a0;
- (id)_startEventMonitor;
- (void)_stopEventMonitor:(id)a0;

@end
