@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface CSIndexEventListener : NSObject {
    unsigned int _indexType;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_managers;
}

+ (id)indexEventListenerForType:(unsigned int)a0 allowCreate:(BOOL)a1;

- (void)handleMessage:(id)a0;
- (id)initWithType:(unsigned int)a0;
- (void)handleDeviceLocking;
- (void).cxx_destruct;
- (id)description;
- (void)lostConnection;
- (id)findJournalBasePath:(id)a0;
- (void)handleDeviceUnlocked;
- (void)processJournalsOnStartupForJournalsPath:(id)a0;

@end
