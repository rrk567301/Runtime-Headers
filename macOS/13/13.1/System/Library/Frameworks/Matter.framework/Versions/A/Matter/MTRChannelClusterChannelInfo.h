@class NSNumber, NSString;

@interface MTRChannelClusterChannelInfo : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *majorNumber;
@property (copy, nonatomic) NSNumber *minorNumber;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *callSign;
@property (copy, nonatomic) NSString *affiliateCallSign;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
