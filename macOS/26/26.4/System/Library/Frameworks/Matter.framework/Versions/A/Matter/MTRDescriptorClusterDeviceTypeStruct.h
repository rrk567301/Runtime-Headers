@class NSNumber;

@interface MTRDescriptorClusterDeviceTypeStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *deviceType;
@property (copy, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSNumber *revision;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
