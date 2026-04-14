@class NSObject;
@protocol OS_dispatch_queue;

@interface MSVSystemDialogManager : NSObject {
    struct __CFDictionary { } *_registeredSystemDialogs;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedManager;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)registerSystemDialog:(id)a0 forUserNotification:(struct __CFUserNotification { } *)a1;
- (id)systemDialogForUserNotification:(struct __CFUserNotification { } *)a0;
- (void)unregisterSystemDialogWithUserNotification:(struct __CFUserNotification { } *)a0;

@end
