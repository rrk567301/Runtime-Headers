@class NSString, NSUUID, NSURL, NSObject, FPDVolumeManager;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface FPDVolume : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_source> *_diskSpaceRecoveryTimer;
}

@property (readonly, nonatomic) NSString *root;
@property (readonly, nonatomic) NSURL *rootURL;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) int dev;
@property (readonly, nonatomic) unsigned int role;
@property (readonly, nonatomic) BOOL isLibraryConfigured;
@property (readonly, nonatomic) BOOL isDefaultVolumeForCurrentPersona;
@property (readonly, nonatomic) NSURL *syncRootsDirectory;
@property (readonly, nonatomic) NSURL *systemDirectory;
@property (readonly, nonatomic) NSURL *purgatoryDirectory;
@property (readonly, weak, nonatomic) FPDVolumeManager *volumeManager;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isDefaultVolume;
- (BOOL)_hasCloudStorageDirAtRoot;
- (id)domainsPropertiesFromDomainsPlistURL:(id)a0 error:(id *)a1;
- (void)enumerateDomainsWithBlock:(id /* block */)a0;
- (id)initWithVolumeInfo:(const struct statfs { unsigned int x0; int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct fsid { int x0[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[1024]; char x14[1024]; unsigned int x15; unsigned int x16[7]; } *)a0 knownRole:(unsigned int)a1 volumeManager:(id)a2;
- (BOOL)isInLowDiskSpaceState;
- (BOOL)monitorLowDiskSpaceRecovery;
- (unsigned int)resolveRoleForVolume:(const struct statfs { unsigned int x0; int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct fsid { int x0[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[1024]; char x14[1024]; unsigned int x15; unsigned int x16[7]; } *)a0;
- (BOOL)writeDomainsPropertiesData:(id)a0 toDomainsPlistURL:(id)a1 error:(id *)a2;

@end
