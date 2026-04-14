@protocol MTLDevice;

@interface PGDeviceDescriptor : NSObject {
    BOOL _usingIOSurfaceMapper;
}

@property (retain, nonatomic) id<MTLDevice> device;
@property (nonatomic) unsigned long long mmioLength;
@property (copy, nonatomic) id /* block */ createTask;
@property (copy, nonatomic) id /* block */ destroyTask;
@property (copy, nonatomic) id /* block */ mapMemory;
@property (copy, nonatomic) id /* block */ unmapMemory;
@property (copy, nonatomic) id /* block */ readMemory;
@property (copy, nonatomic) id /* block */ raiseInterrupt;
@property (copy, nonatomic) id /* block */ addTraceRange;
@property (copy, nonatomic) id /* block */ removeTraceRange;
@property (nonatomic) unsigned int displayPortCount;

- (void)dealloc;
- (id)init;
- (void)setUsingIOSurfaceMapper:(BOOL)a0;
- (BOOL)usingIOSurfaceMapper;

@end
