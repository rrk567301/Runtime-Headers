@class NSMutableDictionary, NSMutableArray;

@interface IKHardwareCapsChangeNotifier : NSObject {
    struct IONotificationPort { } *_notificationPort;
    NSMutableDictionary *_notifierMap;
    NSMutableArray *_cameraCallbackObjs;
    BOOL _hasQ8;
    BOOL _hasDV;
    id _delegate;
}

+ (id)hardwareCapsChangeNotifier;

- (void)finalize;
- (void)dealloc;
- (id)init;
- (void)initialize;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)registerForHardwareNotification;
- (void)unregisterForHardwareNotification;
- (void)initIOKitNotifications;
- (void)_broadcastHardwareCaps;
- (void)createNotification:(struct __CFDictionary { } *)a0 callback:(void /* function */ *)a1;
- (struct IONotificationPort { } *)notificationPort;
- (id)notifierMap;
- (void)audioHardwareChanged:(id)a0;
- (unsigned int)cameraCallbackFindParent:(unsigned int)a0 parentClass:(const char *)a1;
- (unsigned int)cameraCallbackCreateNotifier:(unsigned int)a0;
- (BOOL)_isGUIDUnique:(id)a0;
- (id)vcHardwareCaps;

@end
