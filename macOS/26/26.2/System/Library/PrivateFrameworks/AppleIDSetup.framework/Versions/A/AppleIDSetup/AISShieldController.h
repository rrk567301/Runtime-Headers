@class NSXPCListener, _TtC12AppleIDSetup15ShieldPresenter;

@interface AISShieldController : NSObject

@property (nonatomic, retain) NSXPCListener *remoteListener;
@property (nonatomic, retain) _TtC12AppleIDSetup15ShieldPresenter *presenter;
@property (nonatomic, weak) void /* function */ delegate;

- (void).cxx_destruct;
- (id)init;
- (void)presentShieldFlowWithContext:(id)a0;
- (void)presentShieldOptions;

@end
