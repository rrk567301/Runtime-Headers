@class NSMutableArray;

@interface MulticastMessageForwarder : NSObject

@property (retain, nonatomic) NSMutableArray *receivers;

- (BOOL)respondsToSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)removeReceiver:(id)a0;
- (void)addReceiver:(id)a0;

@end
