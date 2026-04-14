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

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithUuid:(id)a0 externalDataUUID:(id)a1;

@end
