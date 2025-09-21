@class NSString, GFList, QCBooleanPort;

@interface QCHIDInput : QCRunLoopPatch {
    QCBooleanPort *outputAvailable;
    NSString *_deviceID;
    char _exclusive;
    GFList *_elementPorts;
    void *_hidDeviceInterface;
    void *_queueInterface;
    struct __CFRunLoopSource { } *_hidEventSource;
    struct __CFDictionary { } *_cookies;
    struct IONotificationPort { } *_notificationPort;
    unsigned int _addNotification;
    unsigned int _removeNotification;
    char _reset;
}

+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)allElementsForDeviceID:(id)a0;
+ (id)deviceIDList:(char)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;

- (void)dealloc;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (char)setState:(id)a0;
- (id)deviceID;
- (void)setDeviceID:(id)a0;
- (void)_cleanUp;
- (void)_setUp;
- (char)setup:(id)a0;
- (char)exclusiveAccess;
- (void)_processEvents;
- (void)_setNeedsReset;
- (void)cleanup:(id)a0;
- (id)deviceElements;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)setDeviceElements:(id)a0;
- (void)setExclusiveAccess:(char)a0;

@end
