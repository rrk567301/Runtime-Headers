@class NSUUID;

@interface _TtCCO14CloudKitDaemon15CKDSessionCheck15EncryptionCheckP33_AE58FEBB3FEC26C4F883E25FBBA159FF18PCSIdentityWatcher : NSObject <CKDPCSIdentityChangeWatcher> {
    void /* unknown type, empty encoding */ token;
    void /* unknown type, empty encoding */ serviceName;
    void /* unknown type, empty encoding */ pcsIdentityChangedCallback;
}

@property (nonatomic, readonly) NSUUID *token;

- (void).cxx_destruct;
- (id)init;
- (void)pcsIdentityChanged;

@end
