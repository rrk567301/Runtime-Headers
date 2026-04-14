@class NSNumber, NSString;

@interface MTRTimeSynchronizationClusterTimeZoneType : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *offset;
@property (copy, nonatomic) NSNumber *validAt;
@property (copy, nonatomic) NSString *name;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
