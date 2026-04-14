@class NSNumber, NSArray;

@interface MTRAccessControlClusterAccessRestrictionEntryStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *endpoint;
@property (copy, nonatomic) NSNumber *cluster;
@property (copy, nonatomic) NSArray *restrictions;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
