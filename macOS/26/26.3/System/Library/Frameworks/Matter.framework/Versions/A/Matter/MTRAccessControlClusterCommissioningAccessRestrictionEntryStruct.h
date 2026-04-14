@class NSNumber, NSArray;

@interface MTRAccessControlClusterCommissioningAccessRestrictionEntryStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *endpoint;
@property (copy, nonatomic) NSNumber *cluster;
@property (copy, nonatomic) NSArray *restrictions;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
