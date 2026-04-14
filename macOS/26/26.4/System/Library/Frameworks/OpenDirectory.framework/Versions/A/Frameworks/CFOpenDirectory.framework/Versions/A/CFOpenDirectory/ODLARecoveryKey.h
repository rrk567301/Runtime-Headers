@class ODLARecoveryKeyIdentifier, LARecoveryKey;

@interface ODLARecoveryKey : NSObject {
    LARecoveryKey *_underlying;
}

@property (readonly, nonatomic) ODLARecoveryKeyIdentifier *identifier;

+ (id)iCloudRecoveryKeyWithPassword:(id)a0 externalData:(id)a1;
+ (id)installerRecoveryKeyWithPassword:(id)a0;
+ (id)institutionalRecoveryKeyWithPassword:(id)a0 externalData:(id)a1;
+ (id)mdmRecoveryKeyWithPassword:(id)a0;
+ (id)personalRecoveryKeyWithPassword:(id)a0;

- (void)dealloc;

@end
