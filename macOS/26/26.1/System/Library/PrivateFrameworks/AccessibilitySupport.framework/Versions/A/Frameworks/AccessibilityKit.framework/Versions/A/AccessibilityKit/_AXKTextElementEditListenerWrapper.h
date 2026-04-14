@protocol AXKTextElementEditListener;

@interface _AXKTextElementEditListenerWrapper : NSObject

@property (weak, nonatomic) id<AXKTextElementEditListener> listener;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithListener:(id)a0;

@end
