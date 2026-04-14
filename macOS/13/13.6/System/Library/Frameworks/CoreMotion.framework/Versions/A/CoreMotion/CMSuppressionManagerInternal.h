@class NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface CMSuppressionManagerInternal : NSObject {
    struct CMSuppressionEventStruct { double timestamp; long long type; unsigned long long reason; } fCurrentSuppressionEvent;
    id /* block */ fSuppressionEventHandler;
    NSOperationQueue *fSuppressionEventQueue;
    NSObject<OS_dispatch_queue> *fInputQueue;
    struct CMSuppressionEventStruct { double timestamp; long long type; unsigned long long reason; } fViewObstructedEvent;
    struct Dispatcher { void /* function */ **x0; id x1; } *fSuppressionEventDispatcher;
    struct CMSuppressionEventStruct { double timestamp; long long type; unsigned long long reason; } fSmartPowerNapEvent;
    struct CMSuppressionEventStruct { double timestamp; long long type; unsigned long long reason; } fDevicePresenceEvent;
    void *fConnection;
    NSObject<OS_dispatch_queue> *fConnectionQueue;
    BOOL fServiceEnabled;
    BOOL fViewObstructedDebugEnabled;
    id /* block */ fViewObstructedStateHandler;
    struct ViewObstructedState { unsigned char fType; struct Suppress { unsigned char fType; BOOL fShouldSuppress; BOOL fAPAwake; unsigned char fCurrentState; unsigned char fOrientation; unsigned char fMotionType; float fLux; float fPocketProbability; } fSuppress; float fMeanProbabilities[4]; } fViewObstructedState;
    struct Dispatcher { void /* function */ **x0; id x1; } *fViewObstructedStateDispatcher;
}

- (void)dealloc;
- (id)init;
- (id).cxx_construct;
- (void)teardownPrivate;

@end
