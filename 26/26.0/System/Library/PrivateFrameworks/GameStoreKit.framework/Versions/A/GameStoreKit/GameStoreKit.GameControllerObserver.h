@class NSString;

@interface GameStoreKit.GameControllerObserver : NSObject {
    void /* unknown type, empty encoding */ _controller;
    void /* unknown type, empty encoding */ _aButton;
    void /* unknown type, empty encoding */ _bButton;
    void /* unknown type, empty encoding */ _xButton;
    void /* unknown type, empty encoding */ _yButton;
    void /* unknown type, empty encoding */ _aButtonPressed;
    void /* unknown type, empty encoding */ _bButtonPressed;
    void /* unknown type, empty encoding */ _xButtonPressed;
    void /* unknown type, empty encoding */ _yButtonPressed;
    void /* unknown type, empty encoding */ _dpadXAxis;
    void /* unknown type, empty encoding */ _dpadYAxis;
    void /* unknown type, empty encoding */ _leftThumbstickXAxis;
    void /* unknown type, empty encoding */ _leftThumbstickYAxis;
    void /* unknown type, empty encoding */ _rightThumbstickXAxis;
    void /* unknown type, empty encoding */ _rightThumbstickYAxis;
    void /* unknown type, empty encoding */ _batteryLevel;
    void /* unknown type, empty encoding */ _batteryState;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

@property (nonatomic, readonly) NSString *description;

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)handleControllerDidConnect:(id)a0;
- (void)handleControllerDidDisconnect:(id)a0;

@end
