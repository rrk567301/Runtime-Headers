@interface HMDCameraStreamSessionInfo : HMDCameraSessionInfo

@property (readonly) BOOL allowsReconfiguration;

- (id)initWithUUID:(id)a0 hostProcessBundleIdentifier:(id)a1 isSPIClient:(BOOL)a2 deviceSectionName:(id)a3 description:(id)a4 allowsReconfiguration:(BOOL)a5;
- (id)initWithUUID:(id)a0 message:(id)a1 accessory:(id)a2 service:(id)a3;

@end
