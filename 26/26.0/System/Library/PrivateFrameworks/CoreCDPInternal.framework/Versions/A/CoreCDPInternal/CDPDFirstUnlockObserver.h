@class AKURLBag, NSArray, CDPLocalDevice, NSUUID, NSUserDefaults;

@interface CDPDFirstUnlockObserver : NSObject <CDPDXPCEventListener> {
    void /* function */ listeners;
    void /* unknown type, empty encoding */ bootSessionIDWrapper;
}

@property (nonatomic, copy) NSArray *listeners;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;
@property (nonatomic, readonly) AKURLBag *urlBag;
@property (nonatomic, readonly) CDPLocalDevice *localDevice;
@property (nonatomic, readonly) NSUUID *bootSessionID;
@property (nonatomic, readonly) BOOL currentDeviceUnlockedForTheFirstTime;
@property (nonatomic, readonly) NSUUID *savedBootSessionID;

- (void)eventReceived:(const char *)a0 eventValue:(unsigned long long)a1;
- (id)init;
- (void)eventReceived:(const char *)a0 eventInfo:(id)a1;
- (void)registerListener:(id)a0;
- (void).cxx_destruct;
- (id)initWithUserDefaults:(id)a0 localDevice:(id)a1 bootSessionID:(id)a2;
- (id)initWithUserDefaults:(id)a0 urlBag:(id)a1 localDevice:(id)a2 bootSessionID:(id)a3;
- (void)reactTo:(const char *)a0;
- (void)recognizeFirstUnlockWith:(id)a0;
- (void)updateSavedBootSessionIDTo:(id)a0;

@end
