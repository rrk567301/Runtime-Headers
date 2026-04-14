@class NSNumber;

@interface MTRAccountLoginClusterLoggedOutEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *node;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
