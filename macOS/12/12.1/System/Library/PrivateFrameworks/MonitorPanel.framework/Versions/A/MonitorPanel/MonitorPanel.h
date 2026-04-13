@class NSView, NSBundle;

@interface MonitorPanel : NSObject {
    int _displayID;
    NSBundle *_bundle;
    NSView *_view;
    id _controller;
}

+ (int)fidelityForDisplayID:(int)a0;

- (void)dealloc;
- (unsigned int)type;
- (id)view;
- (void)setBundle:(id)a0;
- (id)bundle;
- (id)controller;
- (id)nibName;
- (void)setController:(id)a0;
- (unsigned int)family;
- (id)initWithDisplayID:(int)a0;
- (void)didLoadNib;
- (void)didSelect;
- (void)didUnselect;
- (void)willSelect;
- (void)willUnselect;
- (BOOL)shouldUnselect;
- (int)majorOrder;
- (int)minorOrder;
- (void)displayWillReconfigure;
- (void)displayDidReconfigure;
- (void)displayHardwareChanged;
- (void)didChangeScreenParameters;

@end
