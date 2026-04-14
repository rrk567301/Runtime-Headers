@class __IOGCFastPathInputQueue;

@interface __IOGCFastPathReader : NSObject {
    struct __CFAllocator { } *allocator;
    __IOGCFastPathInputQueue *queue;
    struct IOGCFastPathReaderInterface **readerInterface;
}

- (id)description;
- (void)dealloc;

@end
