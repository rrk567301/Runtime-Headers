@class NSNumber;

@interface MTRDescriptorClusterDeviceType : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSNumber *revision;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
