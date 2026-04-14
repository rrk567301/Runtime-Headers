@interface PGIOSurfaceHostDeviceDescriptor : NSObject {
    unsigned long long _mmioLength;
    id /* block */ _mapMemory;
    id /* block */ _unmapMemory;
    id /* block */ _raiseInterrupt;
}

@property unsigned long long mmioLength;
@property id /* block */ mapMemory;
@property id /* block */ unmapMemory;
@property id /* block */ raiseInterrupt;

- (void)dealloc;
- (id)init;

@end
