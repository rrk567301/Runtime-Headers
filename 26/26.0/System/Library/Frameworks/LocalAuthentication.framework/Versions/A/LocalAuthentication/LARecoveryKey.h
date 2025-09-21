@class LARecoveryKeyIdentifier, LARecoveryCredential, LARecoveryData;

@interface LARecoveryKey : NSObject

@property (nonatomic, readonly) LARecoveryKeyIdentifier *identifier;
@property (nonatomic, readonly) LARecoveryCredential *credential;
@property (nonatomic, readonly) LARecoveryData *externalData;

+ (id)iCloudRecoveryKeyWithPassword:(id)a0 externalData:(id)a1;
+ (id)installerRecoveryKeyWithPassword:(id)a0;
+ (id)institutionalRecoveryKeyWithPassword:(id)a0 externalData:(id)a1;
+ (id)mdmRecoveryKeyWithPassword:(id)a0;
+ (id)personalRecoveryKeyWithPassword:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 credential:(id)a1;
- (id)initWithIdentifier:(id)a0 credential:(id)a1 externalData:(id)a2;

@end
