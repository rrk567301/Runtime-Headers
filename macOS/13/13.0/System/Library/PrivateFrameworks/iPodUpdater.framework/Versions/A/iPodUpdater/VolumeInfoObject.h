@class NSString;

@interface VolumeInfoObject : NSObject {
    NSString *_bsdName;
    NSString *_volName;
    short _vRefNum;
    struct FSRef { unsigned char hidden[80]; } _fsRef;
    NSString *_mountPoint;
}

+ (id)getVolumeInfoFromService:(unsigned int)a0;
+ (int)unmountPartitions:(id)a0;
+ (id)volumeInfoObject:(char[512] *)a0 volumeName:(struct HFSUniStr255 { unsigned short x0; unsigned short x1[255]; } *)a1 volumeRefNum:(short)a2 fileSystemRef:(struct FSRef { unsigned char x0[80]; } *)a3;
+ (id)mountPointFoBSDPath:(id)a0;

- (void)dealloc;
- (id)description;
- (id)mountPoint;
- (id)bsdName;
- (void)setMountPoint:(id)a0;
- (id)volumePath;
- (void)setBsdName:(id)a0;
- (id)initWithBSDName:(char[512] *)a0 volumeName:(struct HFSUniStr255 { unsigned short x0; unsigned short x1[255]; } *)a1 volumeRefNum:(short)a2 fileSystemRef:(struct FSRef { unsigned char x0[80]; } *)a3;
- (id)volName;
- (void)setVolName:(id)a0;
- (short)vRefNum;
- (void)setVRefNum:(short)a0;
- (void)getRootDirFSRef:(struct FSRef { unsigned char x0[80]; } *)a0;

@end
