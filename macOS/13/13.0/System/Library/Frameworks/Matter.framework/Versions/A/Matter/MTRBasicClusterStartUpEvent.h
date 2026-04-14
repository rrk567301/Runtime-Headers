@class NSNumber;

@interface MTRBasicClusterStartUpEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *softwareVersion;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
