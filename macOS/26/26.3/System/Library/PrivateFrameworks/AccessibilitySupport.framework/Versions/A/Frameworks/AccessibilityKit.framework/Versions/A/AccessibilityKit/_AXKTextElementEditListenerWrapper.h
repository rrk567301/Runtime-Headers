@protocol AXKTextElementEditListener;

@interface _AXKTextElementEditListenerWrapper : NSObject

@property (weak, nonatomic) id<AXKTextElementEditListener> listener;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithListener:(id)a0;

@end
