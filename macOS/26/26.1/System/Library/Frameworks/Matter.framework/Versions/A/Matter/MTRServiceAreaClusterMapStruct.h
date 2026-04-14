@class NSNumber, NSString;

@interface MTRServiceAreaClusterMapStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *mapID;
@property (copy, nonatomic) NSString *name;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
