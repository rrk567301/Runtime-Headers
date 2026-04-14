@interface LACWeakBox : NSObject {
    id _receiver;
}

@property (readonly, nonatomic) id receiver;

- (void).cxx_destruct;
- (id)initWithReceiver:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)dealloc;

@end
