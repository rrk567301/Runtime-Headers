@class NSNumber;

@interface MTRScenesClusterCopySceneParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *mode;
@property (copy, nonatomic) NSNumber *groupIdFrom;
@property (copy, nonatomic) NSNumber *sceneIdFrom;
@property (copy, nonatomic) NSNumber *groupIdTo;
@property (copy, nonatomic) NSNumber *sceneIdTo;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
