@protocol AXKKeyboardFocusListener;

@interface _AXKKeyboardFocusListenerWrapper : NSObject

@property (weak, nonatomic) id<AXKKeyboardFocusListener> listener;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithListener:(id)a0;

@end
