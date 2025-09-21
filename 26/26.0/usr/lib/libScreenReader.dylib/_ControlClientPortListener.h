@class NSString, NSObject;
@protocol ScreenReaderRemoteControlReceiver;

@interface _ControlClientPortListener : _BaseClientPortListener

@property (retain, nonatomic) NSString *remoteId;
@property (retain, nonatomic) NSString *remoteName;
@property (retain, nonatomic) NSObject<ScreenReaderRemoteControlReceiver> *receiver;

- (void)onStart;
- (id)initWithServerPort:(unsigned int)a0 remoteId:(id)a1 remoteName:(id)a2 receiver:(id)a3;
- (void)onStop;
- (void)receiveEvent:(id)a0;

@end
