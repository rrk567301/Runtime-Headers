@class NSArray;

@interface _NSBundleDidLoadNotificationPayloadArray : NSArray {
    const struct mach_header { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *_libraryHeader;
    NSArray *_storage;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void)dealloc;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithHeader:(const struct mach_header { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *)a0;
- (void)_generateStorageLocked;

@end
