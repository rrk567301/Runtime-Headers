@class NSView, NSBundle;

@interface MonitorPanel : NSObject {
    int _displayID;
    NSBundle *_bundle;
    NSView *_view;
    id _controller;
}

+ (int)fidelityForDisplayID:(int)a0;

- (id)bundle;
- (id)controller;
- (void)setController:(id)a0;
- (unsigned int)family;
- (void)setBundle:(id)a0;
- (unsigned int)type;
- (id)view;
- (void)dealloc;
- (id)nibName;
- (id)initWithDisplayID:(int)a0;
- (void)didLoadNib;
- (void)didSelect;
- (void)didUnselect;
- (void)willSelect;
- (void)willUnselect;
- (BOOL)shouldUnselect;
- (void)didChangeScreenParameters;
- (void)displayDidReconfigure;
- (void)displayHardwareChanged;
- (void)displayWillReconfigure;
- (int)majorOrder;
- (int)minorOrder;

@end
