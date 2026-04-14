@class NSString, NSNumber;

@interface MTRDataTypeLocationDescriptorStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *locationName;
@property (copy, nonatomic) NSNumber *floorNumber;
@property (copy, nonatomic) NSNumber *areaType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
