@class NSMutableArray;

@interface IFFileEntry : NSObject {
    NSMutableArray *_children;
    IFFileEntry *_parent;
    int _hash;
}

- (unsigned long long)size;
- (void)dealloc;
- (unsigned long long)hash;
- (id)path;
- (BOOL)isDirectory;
- (id)fileType;
- (struct stat { int x0; unsigned short x1; unsigned short x2; unsigned long long x3; unsigned int x4; unsigned int x5; int x6; struct timespec { long long x0; long long x1; } x7; struct timespec { long long x0; long long x1; } x8; struct timespec { long long x0; long long x1; } x9; struct timespec { long long x0; long long x1; } x10; long long x11; long long x12; int x13; unsigned int x14; unsigned int x15; int x16; long long x17[2]; } *)statInfo;
- (int)compressionType;
- (void)setParentEntry:(id)a0;
- (id)parentEntry;
- (unsigned long long)rawSize;
- (long long)rawOffset;
- (id)childEntries;
- (void)addChildEntry:(id)a0;
- (id)rawHashTypes;
- (id)rawHashForType:(id)a0;

@end
