@class NSFileHandle;

@interface NSConcretePipe : NSPipe {
    NSFileHandle *_readHandle;
    NSFileHandle *_writeHandle;
}

- (void)_closeOnDealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fileHandleForWriting;
- (id)init;
- (id)fileHandleForReading;
- (void)dealloc;

@end
