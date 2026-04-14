@class NSNumber, NSArray;

@interface MTRAccessControlClusterAccessRestrictionEntryStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *endpoint;
@property (copy, nonatomic) NSNumber *cluster;
@property (copy, nonatomic) NSArray *restrictions;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
