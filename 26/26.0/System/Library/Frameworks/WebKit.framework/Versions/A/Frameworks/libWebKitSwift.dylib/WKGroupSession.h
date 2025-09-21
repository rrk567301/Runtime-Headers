@class WKURLActivity, NSUUID;

@interface WKGroupSession : NSObject {
    void /* unknown type, empty encoding */ groupSession;
    void /* unknown type, empty encoding */ backingActivity;
    void /* unknown type, empty encoding */ cancellables;
    void /* function */ newActivityCallback;
    void /* function */ stateChangedCallback;
}

@property (nonatomic, readonly) WKURLActivity *activity;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) long long state;
@property (nonatomic, copy) id /* block */ newActivityCallback;
@property (nonatomic, copy) id /* block */ stateChangedCallback;

- (void)leave;
- (void).cxx_destruct;
- (void)join;
- (void)coordinateWithCoordinator:(id)a0;

@end
