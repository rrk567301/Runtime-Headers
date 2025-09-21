@class NSSet, HKNanoSyncPairedDeviceInfo;

@interface HKNanoSyncPairedDevicesSnapshot : NSObject <NSCopying, NSSecureCoding> {
    HKNanoSyncPairedDeviceInfo *_activeDeviceInfo;
    NSSet *_allDeviceInfos;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) HKNanoSyncPairedDeviceInfo *activeDeviceInfo;
@property (readonly, copy) NSSet *allDeviceInfos;

- (id)initWithPairedDeviceInfos:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)deviceInfoForSourceBundleIdentifier:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
