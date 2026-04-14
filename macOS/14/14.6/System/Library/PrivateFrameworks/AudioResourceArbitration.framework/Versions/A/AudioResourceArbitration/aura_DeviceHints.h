@class NSNumber, NSArray;
@protocol AuRA_Device;

@interface AuRA_DeviceHints : NSObject <NSCopying>

@property (retain, nonatomic) id<AuRA_Device> device;
@property (retain, nonatomic) NSNumber *sampleRate;
@property (retain, nonatomic) NSNumber *dataSource;
@property (retain, nonatomic) NSArray *inputStreamHints;
@property (retain, nonatomic) NSArray *outputStreamHints;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
