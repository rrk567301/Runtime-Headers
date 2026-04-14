@class SCRCThreadKey;

@interface SCROutputThreadedObject : NSObject

@property (retain, nonatomic) SCRCThreadKey *threadKey;

- (void)handleEvent:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void)enqueueEvent:(id)a0;
- (void).cxx_destruct;
- (void)processNotification:(id)a0;

@end
