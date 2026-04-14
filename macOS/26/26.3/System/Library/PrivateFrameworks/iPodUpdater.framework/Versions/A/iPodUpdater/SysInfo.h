@class PUDevice, NSMutableDictionary;

@interface SysInfo : NSObject {
    PUDevice *_device;
    NSMutableDictionary *_sysInfo;
}

- (id)initWithDevice:(id)a0;
- (unsigned int)firmwareVersion;
- (id)serialNumber;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (void)dealloc;
- (void)readSysInfoFile;
- (int)updaterFamilyID;
- (void)parseSysInfoData:(id)a0;
- (int)podFamilyID;
- (id)userVisibleFirmwareVersion;

@end
