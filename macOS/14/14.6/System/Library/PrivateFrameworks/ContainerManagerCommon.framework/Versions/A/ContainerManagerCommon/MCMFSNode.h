@class NSString;

@interface MCMFSNode : NSObject <MCMFSNode>

@property (readonly, nonatomic) unsigned long long inode;
@property (readonly, nonatomic) int device;
@property (readonly, nonatomic) long long ctime;
@property (readonly, nonatomic) BOOL isDirectory;
@property (readonly, nonatomic) BOOL isSymlink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithINode:(unsigned long long)a0 device:(int)a1 ctime:(long long)a2 isDirectory:(BOOL)a3 isSymlink:(BOOL)a4;
- (id)initWithStat:(struct stat { int x0; unsigned short x1; unsigned short x2; unsigned long long x3; unsigned int x4; unsigned int x5; int x6; struct timespec { long long x0; long long x1; } x7; struct timespec { long long x0; long long x1; } x8; struct timespec { long long x0; long long x1; } x9; struct timespec { long long x0; long long x1; } x10; long long x11; long long x12; int x13; unsigned int x14; unsigned int x15; int x16; long long x17[2]; } *)a0;
- (BOOL)isEqualToFSNode:(id)a0;

@end
