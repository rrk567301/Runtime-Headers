@class _GCControllerManagerServer, GCSSettingsStore, NSMapTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_mach, GCUserDefaults;

@interface GCSyntheticDeviceManager : NSObject {
    _GCControllerManagerServer *_server;
    NSObject<OS_dispatch_queue> *_queue;
    struct IONotificationPort { } *_notifyPort;
    unsigned int _service;
    unsigned int _connect;
    unsigned long long _kernelClientGeneration;
    unsigned int _upcallPort;
    NSObject<OS_dispatch_mach> *_upcallMachChannel;
    struct __CFDictionary { } *_3pSyntheticControllerMatchingCriteria;
    unsigned int _3pSyntheticControllerPublishedNotification;
    unsigned int _3pSyntheticControllerTerminatedNotification;
    unsigned long long _3pSyntheticControllerCount;
    id<GCUserDefaults> _defaults;
    char _disabledByPreference;
    GCSSettingsStore *_settingsStore;
    NSMapTable *_syntheticDevices;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithServer:(id)a0;

@end
