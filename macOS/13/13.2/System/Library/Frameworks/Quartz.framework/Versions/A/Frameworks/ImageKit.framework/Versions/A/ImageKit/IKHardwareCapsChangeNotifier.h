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

- (void)dealloc;
- (void)initialize;
- (id)init;
- (void)finalize;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)registerForHardwareNotification;
- (void)unregisterForHardwareNotification;
- (void)initIOKitNotifications;
- (void)createNotification:(struct __CFDictionary { } *)a0 callback:(void /* function */ *)a1;
- (id)notifierMap;
- (struct IONotificationPort { } *)notificationPort;
- (void)audioHardwareChanged:(id)a0;
- (unsigned int)cameraCallbackFindParent:(unsigned int)a0 parentClass:(const char *)a1;
- (unsigned int)cameraCallbackCreateNotifier:(unsigned int)a0;
- (BOOL)_isGUIDUnique:(id)a0;
- (void)_broadcastHardwareCaps;
- (id)vcHardwareCaps;

@end
