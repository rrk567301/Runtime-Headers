@class NSData, NSNumber;

@interface MTROperationalCredentialsClusterNOCStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSData *noc;
@property (copy, nonatomic) NSData *icac;
@property (copy, nonatomic) NSData *vvsc;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
