@class NSString, NSNumber;

@interface HMDCameraSnapshotSessionID : HMDCameraSessionID

@property (readonly) NSString *snapshotCharacteristicEventUUID;
@property (readonly) unsigned long long snapshotReason;
@property (readonly, getter=isSnapshotRequestForBulletin) char snapshotRequestForBulletin;
@property (readonly) NSNumber *streamingTier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0 message:(id)a1;
- (id)initWithSessionID:(id)a0 hostProcessBundleIdentifier:(id)a1 isSPIClient:(char)a2 deviceSectionName:(id)a3 description:(id)a4 snapshotReason:(unsigned long long)a5 snapshotRequestForBulletin:(char)a6 snapshotCharacteristicEventUUID:(id)a7 streamingTier:(id)a8;

@end
