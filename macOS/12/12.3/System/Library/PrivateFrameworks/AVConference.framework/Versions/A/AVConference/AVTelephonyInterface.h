@class NSObject;
@protocol OS_dispatch_queue, AVTelephonyInterfaceDelegate;

@interface AVTelephonyInterface : NSObject {
    id _delegate;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    struct __CTServerConnection { } *_connection;
}

@property id<AVTelephonyInterfaceDelegate> delegate;

- (void)dealloc;
- (id)init;
- (BOOL)registerForNotifications;
- (void)unregisterForNotifications;
- (void)notifyCTCurrentAudioPayload:(int)a0 mode:(int)a1 bitrate:(unsigned int)a2;
- (void)handleTelephonyNotification:(id)a0 withInfo:(id)a1;
- (void)handleVocoderNotificationWithInfo:(id)a0;
- (id)translateVocoderTypeToCoreAudioType:(id)a0;

@end
