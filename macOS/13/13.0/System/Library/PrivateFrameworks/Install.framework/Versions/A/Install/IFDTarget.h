@interface IFDTarget : NSObject {
    struct IFDTarget_Private { id x0; id x1; id x2; id x3; int x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; id x17; } *_private;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)volume;
- (int)status;
- (id)initWithPath:(id)a0;
- (void)setStatus:(int)a0;
- (id)contextData;
- (id)searchContext;
- (id)volumeName;
- (id)volumePath;
- (id)volumeSize;
- (id)owningController;
- (void)setOwningController:(id)a0;
- (id)installedSystemVersion;
- (id)installedSystemName;
- (id)installedSystemBuild;
- (id)volumeAvailableSize;
- (id)failureMessage;
- (id)installedSystemDictionary;
- (id)installedSystemCompatDictionary;
- (id)installedSystemCompatName;
- (id)installedSystemCompatVersion;
- (id)installedSystemCompatBuild;
- (id)volumeID;
- (id)volumeFreeSize;
- (id)subPath;
- (int)installDomain;
- (id)_displayableVolumePathNameForString:(id)a0;
- (id)initWithVolume:(id)a0 andSubPath:(id)a1;
- (id)initWithTarget:(id)a0 andSubPath:(id)a1;
- (void)setFailureMessage:(id)a0;
- (void)setInstalledSystemDictionary:(id)a0;
- (void)setInstalledSystemCompatDictionary:(id)a0;
- (void)addError:(id)a0 forPackage:(id)a1;
- (id)errorForPackage:(id)a0;
- (void)setReceipt:(id)a0 forPackage:(id)a1;
- (id)receiptForPackage:(id)a0;
- (id)receiptSizeForPackage:(id)a0;

@end
