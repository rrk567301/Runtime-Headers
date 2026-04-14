@class PUDevice, NSMutableDictionary;

@interface SysInfo : NSObject {
    PUDevice *_device;
    NSMutableDictionary *_sysInfo;
}

- (unsigned int)firmwareVersion;
- (id)serialNumber;
- (void)dealloc;
- (id)initWithDevice:(id)a0;
- (id)valueForKey:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)readSysInfoFile;
- (int)updaterFamilyID;
- (void)parseSysInfoData:(id)a0;
- (int)podFamilyID;
- (id)userVisibleFirmwareVersion;

@end
