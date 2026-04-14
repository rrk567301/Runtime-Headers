@class NSUUID;

@interface LARecoveryKeyIdentifier : NSObject {
    void /* unknown type, empty encoding */ properties;
}

@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSUUID *externalDataUUID;
@property (nonatomic, readonly) long long hash;

+ (id)iCloudRecoveryKeyIdentifier;
+ (id)installerRecoveryKeyIdentifier;
+ (id)institutionalRecoveryKeyIdentifier;
+ (id)mdmRecoveryKeyIdentifier;
+ (id)personalRecoveryKeyIdentifier;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithUuid:(id)a0 externalDataUUID:(id)a1;

@end
