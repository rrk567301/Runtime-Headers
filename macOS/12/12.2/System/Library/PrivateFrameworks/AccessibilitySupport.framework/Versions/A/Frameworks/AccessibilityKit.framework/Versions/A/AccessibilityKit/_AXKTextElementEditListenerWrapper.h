@protocol AXKTextElementEditListener;

@interface _AXKTextElementEditListenerWrapper : NSObject

@property (weak, nonatomic) id<AXKTextElementEditListener> listener;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithListener:(id)a0;

@end
