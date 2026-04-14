@class NSData, NSNumber;

@interface MTRAccessControlClusterExtensionEntry : NSObject <NSCopying>

@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
