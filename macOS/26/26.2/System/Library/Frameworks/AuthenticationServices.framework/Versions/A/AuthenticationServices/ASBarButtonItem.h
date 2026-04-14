@class NSButton, NSString;

@interface ASBarButtonItem : NSObject

@property (readonly, nonatomic) NSButton *button;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 style:(long long)a1 target:(id)a2 action:(SEL)a3;

@end
