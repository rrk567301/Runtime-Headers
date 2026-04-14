@class NSNumber, NSString;

@interface MTRThreadNetworkDirectoryClusterThreadNetworkStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *extendedPanID;
@property (copy, nonatomic) NSString *networkName;
@property (copy, nonatomic) NSNumber *channel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
