@interface LACWeakBox : NSObject {
    id _receiver;
}

@property (readonly, nonatomic) id receiver;

- (id)initWithReceiver:(id)a0;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;

@end
