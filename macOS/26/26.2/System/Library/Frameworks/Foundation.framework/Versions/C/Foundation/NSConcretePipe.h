@class NSFileHandle;

@interface NSConcretePipe : NSPipe {
    NSFileHandle *_readHandle;
    NSFileHandle *_writeHandle;
}

- (void)_closeOnDealloc;
- (id)fileHandleForReading;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)fileHandleForWriting;
- (void)dealloc;

@end
