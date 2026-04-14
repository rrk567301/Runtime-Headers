@class PGMemoryMapDescriptor;

@interface PGIOSurfaceHostDeviceDescriptor : NSObject

@property unsigned long long mmioLength;
@property (copy) id /* block */ raiseInterrupt;
@property (copy) id /* block */ mapMemory;
@property (copy) id /* block */ unmapMemory;
@property (retain) PGMemoryMapDescriptor *memoryMapDescriptor;

- (void)dealloc;
- (id)init;

@end
