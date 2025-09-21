@class NSArray;

@interface TCComputeDevice : NSObject

@property (retain, nonatomic) NSArray *devices;
@property (nonatomic) char forceCPU;

- (void).cxx_destruct;
- (id)asMLCDevice;
- (id)asMLCDevice:(long long)a0;
- (id)asVNDevice;
- (id)asVNDevice:(long long)a0;
- (id)initWithDevices:(id)a0 forceCPU:(char)a1;

@end
