@class NSNumber;

@interface MTRBasicClusterLeaveEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
