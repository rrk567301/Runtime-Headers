@class NSString, NSButton;

@interface AKBarButtonItem : NSObject {
    NSButton *_barButton;
}

@property (copy) NSString *title;
@property long long style;
@property SEL action;
@property (weak) id target;
@property (getter=isEnabled) BOOL enabled;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 style:(long long)a1 target:(id)a2 action:(SEL)a3;
- (id)_createButton;

@end
