@class NSFileHandle;

@interface NSConcretePipe : NSPipe {
    NSFileHandle *_readHandle;
    NSFileHandle *_writeHandle;
}

- (id)fileHandleForReading;
- (void)dealloc;
- (void)_closeOnDealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)fileHandleForWriting;

@end
