@class NSNumber, NSString;

@interface MTRContentControlClusterBlockChannelStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *blockChannelIndex;
@property (copy, nonatomic) NSNumber *majorNumber;
@property (copy, nonatomic) NSNumber *minorNumber;
@property (copy, nonatomic) NSString *identifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
