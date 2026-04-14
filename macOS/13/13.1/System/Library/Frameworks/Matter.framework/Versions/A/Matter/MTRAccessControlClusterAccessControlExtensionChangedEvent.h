@class NSNumber, MTRAccessControlClusterExtensionEntry;

@interface MTRAccessControlClusterAccessControlExtensionChangedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *adminNodeID;
@property (copy, nonatomic) NSNumber *adminPasscodeID;
@property (copy, nonatomic) NSNumber *changeType;
@property (copy, nonatomic) MTRAccessControlClusterExtensionEntry *latestValue;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
