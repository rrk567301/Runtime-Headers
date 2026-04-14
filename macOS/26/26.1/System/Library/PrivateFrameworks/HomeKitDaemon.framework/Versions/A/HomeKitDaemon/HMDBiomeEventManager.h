@class NSObject, BMHomeKitClientMediaAccessoryControlStream, BMHomeKitClientAccessoryControlStream, BMHomeKitClientActionSetStream, NSNotificationCenter;
@protocol OS_dispatch_queue;

@interface HMDBiomeEventManager : HMFObject

@property (readonly) BMHomeKitClientActionSetStream *actionSetStream;
@property (readonly) BMHomeKitClientMediaAccessoryControlStream *mediaAccessoryStream;
@property (readonly) BMHomeKitClientAccessoryControlStream *hapAccessoryStream;
@property (readonly) id /* block */ prunableStreamFactory;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void)_handleActionSetEmptiedNotification:(id)a0;
- (void)_handleServiceRemovedNotification:(id)a0;
- (void)deleteAllEvents;
- (id)initWithNotificationCenter:(id)a0 actionSetStream:(id)a1 mediaAccessoryStream:(id)a2 accessoryStream:(id)a3 prunableStreamFactory:(id /* block */)a4 workQueue:(id)a5;
- (void)_handleHomeRemovedNotification:(id)a0;
- (void)submitAccessoryEvent:(id)a0;
- (void)_submitAccessoryEvent:(id)a0;
- (void)submitActionSetEvent:(id)a0;
- (void)_handleAccessoryRemovedNotification:(id)a0;
- (void)_submitActionSetEvent:(id)a0;
- (void).cxx_destruct;
- (void)_submitMediaAccessoryEvent:(id)a0;
- (void)submitMediaAccessoryEvent:(id)a0;
- (id)init;

@end
