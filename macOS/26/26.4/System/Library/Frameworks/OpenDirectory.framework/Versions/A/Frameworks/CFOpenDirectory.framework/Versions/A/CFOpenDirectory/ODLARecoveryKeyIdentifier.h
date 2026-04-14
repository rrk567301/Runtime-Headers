@class NSUUID, LARecoveryKeyIdentifier;

@interface ODLARecoveryKeyIdentifier : NSObject {
    LARecoveryKeyIdentifier *_underlying;
}

@property (readonly, nonatomic) NSUUID *uuid;

+ (id)iCloudRecoveryKeyIdentifier;
+ (id)installerRecoveryKeyIdentifier;
+ (id)institutionalRecoveryKeyIdentifier;
+ (id)mdmRecoveryKeyIdentifier;
+ (id)personalRecoveryKeyIdentifier;

- (void)dealloc;

@end
