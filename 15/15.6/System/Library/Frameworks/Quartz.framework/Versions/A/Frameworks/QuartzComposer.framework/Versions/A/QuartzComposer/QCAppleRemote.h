@class QCBooleanPort;

@interface QCAppleRemote : QCRunLoopPatch {
    QCBooleanPort *outputAvailable;
    QCBooleanPort *outputUpSignal;
    QCBooleanPort *outputDownSignal;
    QCBooleanPort *outputPreviousSignal;
    QCBooleanPort *outputNextSignal;
    QCBooleanPort *outputPlaySignal;
    QCBooleanPort *outputMenuSignal;
    QCBooleanPort *outputSelectSignal;
    char _exclusive;
    void *_hidDeviceInterface;
    void *_queueInterface;
    struct __CFRunLoopSource { } *_hidEventSource;
    struct __CFDictionary { } *_cookies;
    unsigned char _buttonsState;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)inspectorNibNameWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;

- (void)_cleanUp;
- (void)_setUp;
- (char)setup:(id)a0;
- (char)exclusiveAccess;
- (void)_processEvents;
- (void)cleanup:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)setExclusiveAccess:(char)a0;

@end
