@class NSNumber, NSString;

@interface MTRTargetNavigatorClusterTargetInfo : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *identifier;
@property (copy, nonatomic) NSString *name;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
