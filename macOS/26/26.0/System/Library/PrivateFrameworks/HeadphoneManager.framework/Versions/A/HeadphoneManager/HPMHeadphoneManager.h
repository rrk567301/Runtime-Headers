@class NSDictionary;
@protocol HPMHeadphoneMangerTopLevelEntryUIHandling;

@interface HPMHeadphoneManager : NSObject <HPMHeadphoneDeviceDelegate> {
    void /* unknown type, empty encoding */ dispatchQueue;
    void /* unknown type, empty encoding */ _topLevelUIHandler;
    void /* unknown type, empty encoding */ cbDiscovery;
    void /* unknown type, empty encoding */ controller;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ deviceManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hmsClient;
    void /* unknown type, empty encoding */ audioAccessoryToken;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cbUserController;
    void /* unknown type, empty encoding */ _connectedRecords;
    void /* unknown type, empty encoding */ _connectedHeadphones;
    void /* unknown type, empty encoding */ _pairedHeadphones;
    void /* function */ pendingConnectedHeadphones;
}

@property (class, nonatomic, readonly) HPMHeadphoneManager *shared;

@property (nonatomic, retain) id<HPMHeadphoneMangerTopLevelEntryUIHandling> topLevelUIHandler;
@property (nonatomic, copy) NSDictionary *connectedRecords;
@property (nonatomic, weak) void /* function */ deviceConnectionListener;
@property (nonatomic, copy) NSDictionary *connectedHeadphones;
@property (nonatomic, copy) NSDictionary *pairedHeadphones;
@property (nonatomic, copy) NSDictionary *pendingConnectedHeadphones;

+ (id)pairedHeadphones;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addTopLevelEntryWithHpDevice:(id)a0;
- (void)disconnectWithHpDevice:(id)a0;
- (id)getDeviceFromUUIDWithUUID:(id)a0;
- (id)headphoneDeviceForAddress:(id)a0;
- (BOOL)isAppleHeadphoneWithCbDevice:(id)a0;
- (void)removeTopLevelEntryWithHpDevice:(id)a0;
- (void)unpairWithHpDevice:(id)a0;
- (void)updateDeviceConfigWithHpDevice:(id)a0 settings:(id)a1;
- (void)updateOfflineDeviceConfigWithHpDevice:(id)a0 settings:(id)a1;
- (void)updateTitleBar;
- (void)updateTopLevelEntryWithHpDevice:(id)a0;

@end
