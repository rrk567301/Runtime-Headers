@class NSMutableArray;

@interface MulticastMessageForwarder : NSObject

@property (retain, nonatomic) NSMutableArray *receivers;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeReceiver:(id)a0;
- (void)addReceiver:(id)a0;

@end
