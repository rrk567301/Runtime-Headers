@class NSString;

@interface LACDiskHelper : NSObject <LACDiskHelper>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diskNameForSystemVolumeWithError:(id *)a0;
- (id)diskNameForVolumeAtPath:(id)a0 error:(id *)a1;
- (id)_bsdNameForVolumeUUID:(id)a0 error:(id *)a1;
- (id)_systemVolumeUUIDWithError:(id *)a0;
- (id)systemVolumePathWithError:(id *)a0;
- (id)volumePathForDiskName:(id)a0 error:(id *)a1;

@end
