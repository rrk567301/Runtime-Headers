@class NSMutableArray;

@interface IFFileEntry : NSObject {
    NSMutableArray *_children;
    IFFileEntry *_parent;
    int _hash;
}

- (id)fileType;
- (void)dealloc;
- (int)compressionType;
- (BOOL)isDirectory;
- (id)path;
- (unsigned long long)hash;
- (unsigned long long)size;
- (unsigned long long)rawSize;
- (long long)rawOffset;
- (id)rawHashForType:(id)a0;
- (void)setParentEntry:(id)a0;
- (void)addChildEntry:(id)a0;
- (id)childEntries;
- (id)parentEntry;
- (id)rawHashTypes;
- (struct stat { int x0; unsigned short x1; unsigned short x2; unsigned long long x3; unsigned int x4; unsigned int x5; int x6; struct timespec { long long x0; long long x1; } x7; struct timespec { long long x0; long long x1; } x8; struct timespec { long long x0; long long x1; } x9; struct timespec { long long x0; long long x1; } x10; long long x11; long long x12; int x13; unsigned int x14; unsigned int x15; int x16; long long x17[2]; } *)statInfo;

@end
