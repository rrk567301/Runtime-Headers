@class NSError;

@interface HAP2AccessoryServerPairingDriverTransportControlWorkItem : HAP2AccessoryServerPairingDriverWorkItem

@property (readonly, nonatomic) char connect;
@property (retain, nonatomic) NSError *cancelError;

+ (id)closeConnection;
+ (id)openConnection;

- (void).cxx_destruct;
- (void)cancelWithError:(id)a0;
- (void)_finishWithError:(id)a0;
- (id)initForClosing;
- (id)initForOpening;
- (id)initWithConnect:(char)a0;
- (void)runForPairingDriver:(id)a0;

@end
