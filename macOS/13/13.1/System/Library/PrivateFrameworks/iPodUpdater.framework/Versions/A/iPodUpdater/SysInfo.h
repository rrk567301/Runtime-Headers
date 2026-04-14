@class PUDevice, NSMutableDictionary;

@interface SysInfo : NSObject {
    PUDevice *_device;
    NSMutableDictionary *_sysInfo;
}

- (void)dealloc;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (id)initWithDevice:(id)a0;
- (id)serialNumber;
- (unsigned int)firmwareVersion;
- (int)updaterFamilyID;
- (int)podFamilyID;
- (id)userVisibleFirmwareVersion;
- (void)readSysInfoFile;
- (void)parseSysInfoData:(id)a0;

@end
