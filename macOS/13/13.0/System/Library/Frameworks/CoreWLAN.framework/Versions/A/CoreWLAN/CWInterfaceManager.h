@class NSSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CWInterfaceManager : NSObject {
    struct IONotificationPort { } *_interfaceAddedNotificationPort;
    unsigned int _interfaceAddedNotification;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (retain) NSMutableDictionary *managedInterfaces;
@property (readonly) NSSet *interfaces;

+ (id)interfaceNames;
+ (id)interfaceManager;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)interfaces;
- (id)interfaceWithName:(id)a0;

@end
