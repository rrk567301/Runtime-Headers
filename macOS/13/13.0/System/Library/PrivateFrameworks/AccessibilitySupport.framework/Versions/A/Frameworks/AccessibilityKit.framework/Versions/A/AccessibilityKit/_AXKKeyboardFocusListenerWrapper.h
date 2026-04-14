@protocol AXKKeyboardFocusListener;

@interface _AXKKeyboardFocusListenerWrapper : NSObject

@property (weak, nonatomic) id<AXKKeyboardFocusListener> listener;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithListener:(id)a0;

@end
