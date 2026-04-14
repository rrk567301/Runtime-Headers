@class NSFileHandle;

@interface NSConcretePipe : NSPipe {
    NSFileHandle *_readHandle;
    NSFileHandle *_writeHandle;
}

- (id)fileHandleForWriting;
- (void)_closeOnDealloc;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fileHandleForReading;
- (id)init;

@end
