@class NSMutableArray;

@interface MulticastMessageForwarder : NSObject

@property (retain, nonatomic) NSMutableArray *receivers;

- (id)init;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)removeReceiver:(id)a0;
- (void)addReceiver:(id)a0;

@end
