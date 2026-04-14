@class NSNumber;

@interface MTRAccountLoginClusterLoggedOutEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *node;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
