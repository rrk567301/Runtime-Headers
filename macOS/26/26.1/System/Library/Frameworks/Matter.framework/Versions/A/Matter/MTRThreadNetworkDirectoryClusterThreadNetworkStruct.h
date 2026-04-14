@class NSData, NSString, NSNumber;

@interface MTRThreadNetworkDirectoryClusterThreadNetworkStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSData *extendedPanID;
@property (copy, nonatomic) NSString *networkName;
@property (copy, nonatomic) NSNumber *channel;
@property (copy, nonatomic) NSNumber *activeTimestamp;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
