@class NSString, NSNumber;

@interface MTRDataTypeLocationDescriptorStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *locationName;
@property (copy, nonatomic) NSNumber *floorNumber;
@property (copy, nonatomic) NSNumber *areaType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
