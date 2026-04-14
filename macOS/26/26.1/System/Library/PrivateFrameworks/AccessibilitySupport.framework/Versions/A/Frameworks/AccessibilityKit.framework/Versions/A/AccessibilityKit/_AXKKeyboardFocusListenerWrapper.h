@protocol AXKKeyboardFocusListener;

@interface _AXKKeyboardFocusListenerWrapper : NSObject

@property (weak, nonatomic) id<AXKKeyboardFocusListener> listener;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithListener:(id)a0;

@end
