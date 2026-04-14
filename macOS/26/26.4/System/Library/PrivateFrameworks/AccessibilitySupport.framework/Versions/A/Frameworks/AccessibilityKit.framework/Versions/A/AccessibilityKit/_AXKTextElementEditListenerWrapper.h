@protocol AXKTextElementEditListener;

@interface _AXKTextElementEditListenerWrapper : NSObject

@property (weak, nonatomic) id<AXKTextElementEditListener> listener;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithListener:(id)a0;

@end
