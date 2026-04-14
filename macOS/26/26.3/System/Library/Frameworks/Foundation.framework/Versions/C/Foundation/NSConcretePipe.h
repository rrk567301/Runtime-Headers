@class NSFileHandle;

@interface NSConcretePipe : NSPipe {
    NSFileHandle *_readHandle;
    NSFileHandle *_writeHandle;
}

- (id)init;
- (id)fileHandleForReading;
- (void)_closeOnDealloc;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fileHandleForWriting;

@end
