@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface CSIndexEventListener : NSObject {
    int _indexType;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_managers;
}

+ (id)indexEventListenerForType:(int)a0 allowCreate:(BOOL)a1;

- (id)initWithType:(int)a0;
- (id)description;
- (void)handleDeviceLocking;
- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (void)lostConnection;
- (id)findJournalBasePath:(id)a0;
- (void)handleDeviceUnlocked;
- (void)processJournalsOnStartupForJournalsPath:(id)a0;

@end
