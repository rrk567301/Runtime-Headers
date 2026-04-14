@class NSUUID, C2Multipeer, NSObject;
@protocol OS_nw_browser, OS_dispatch_source, OS_nw_listener;

@interface C2MultipeerDiscovery : NSObject

@property (weak, nonatomic) C2Multipeer *parent;
@property (retain, nonatomic) NSUUID *myPeerID;
@property (retain, nonatomic) NSObject<OS_nw_listener> *listener;
@property (retain, nonatomic) NSObject<OS_nw_browser> *browser;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *browserTimer;

- (id)_listener;
- (void)touch;
- (void).cxx_destruct;
- (id)initWithParent:(id)a0;
- (void)startTimer;
- (void)resetTimer;
- (id)_browser;
- (id)_peerToPeerParameters;

@end
