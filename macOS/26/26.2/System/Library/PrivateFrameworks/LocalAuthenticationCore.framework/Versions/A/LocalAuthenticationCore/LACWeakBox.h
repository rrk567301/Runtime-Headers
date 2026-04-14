@interface LACWeakBox : NSObject {
    id _receiver;
}

@property (readonly, nonatomic) id receiver;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithReceiver:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
