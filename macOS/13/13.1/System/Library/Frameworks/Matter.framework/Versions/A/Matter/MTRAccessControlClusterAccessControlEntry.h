@class NSNumber, NSArray;

@interface MTRAccessControlClusterAccessControlEntry : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *privilege;
@property (copy, nonatomic) NSNumber *authMode;
@property (copy, nonatomic) NSArray *subjects;
@property (copy, nonatomic) NSArray *targets;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
