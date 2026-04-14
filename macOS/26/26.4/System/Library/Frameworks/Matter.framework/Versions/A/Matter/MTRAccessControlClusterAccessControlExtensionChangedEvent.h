@class NSNumber, MTRAccessControlClusterAccessControlExtensionStruct;

@interface MTRAccessControlClusterAccessControlExtensionChangedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *adminNodeID;
@property (copy, nonatomic) NSNumber *adminPasscodeID;
@property (copy, nonatomic) NSNumber *changeType;
@property (copy, nonatomic) MTRAccessControlClusterAccessControlExtensionStruct *latestValue;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
