@protocol AXKKeyboardFocusListener;

@interface _AXKKeyboardFocusListenerWrapper : NSObject

@property (weak, nonatomic) id<AXKKeyboardFocusListener> listener;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithListener:(id)a0;

@end
