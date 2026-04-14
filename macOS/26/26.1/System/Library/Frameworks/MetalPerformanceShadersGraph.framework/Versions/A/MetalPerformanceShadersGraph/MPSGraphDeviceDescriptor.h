@class NSString, NSArray;

@interface MPSGraphDeviceDescriptor : MPSGraphObject <NSCopying>

@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) long long gpuCoreCount;
@property (readonly, nonatomic) NSString *architecture;
@property (readonly, nonatomic) NSArray *serializedProperties;
@property (readonly, nonatomic) unsigned long long preComputedHash;

- (BOOL)hasANE;
- (BOOL)supportsMXU;
- (unsigned long long)hash;
- (BOOL)isEqualTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initMetalDeviceWithGPUCoreCount:(long long)a0 architecture:(id)a1;
- (id)initWithMPSGraphDevice:(id)a0;
- (id)initWithSerializedProperties:(id)a0;

@end
