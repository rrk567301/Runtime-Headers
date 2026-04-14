@class NSNumber, NSString;

@interface MTRServiceAreaClusterMapStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *mapID;
@property (copy, nonatomic) NSString *name;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
