@class OS_dispatch_queue;

@interface Rapport.RPPairingReceiverController : NSObject <NSSecureCoding, Rapport.RPPairingReceiverControllerXPCClientInterface> {
    void /* function */ pairingValueUpdatedHandler;
    void /* unknown type, empty encoding */ xpcCnx;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) OS_dispatch_queue *queue;
@property (nonatomic, copy) id /* block */ pairingValueUpdatedHandler;
@property (nonatomic) BOOL pairingValueUIVisible;

- (id)initWithQueue:(id)a0;
- (void)start;
- (void)stop;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)pairingValueUpdated:(id)a0;

@end
