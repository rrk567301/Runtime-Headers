@class NSMutableArray;

@interface SPDevice : NSObject

@property unsigned int entry;
@property (retain) NSMutableArray *children;

- (void)dealloc;
- (id)initWithRegistryEntry:(unsigned int)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (int)devicePowerState:(const char *)a0 outPowerState:(unsigned int *)a1;
- (id)deviceACPIPath:(const char *)a0;
- (id)anonymousDictionaryRepresentationForVolume:(struct __DADisk { } *)a0;
- (id)dictionaryRepresentationForVolume:(struct __DADisk { } *)a0;

@end
