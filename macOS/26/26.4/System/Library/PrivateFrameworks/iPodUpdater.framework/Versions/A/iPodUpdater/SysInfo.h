@class PUDevice, NSMutableDictionary;

@interface SysInfo : NSObject {
    PUDevice *_device;
    NSMutableDictionary *_sysInfo;
}

- (void)setValue:(id)a0 forKey:(id)a1;
- (id)initWithDevice:(id)a0;
- (unsigned int)firmwareVersion;
- (id)valueForKey:(id)a0;
- (id)serialNumber;
- (void)dealloc;
- (void)readSysInfoFile;
- (int)updaterFamilyID;
- (void)parseSysInfoData:(id)a0;
- (int)podFamilyID;
- (id)userVisibleFirmwareVersion;

@end
