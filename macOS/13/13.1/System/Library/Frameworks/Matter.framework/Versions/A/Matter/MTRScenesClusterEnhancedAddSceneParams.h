@class NSNumber, NSString, NSArray;

@interface MTRScenesClusterEnhancedAddSceneParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *groupId;
@property (copy, nonatomic) NSNumber *sceneId;
@property (copy, nonatomic) NSNumber *transitionTime;
@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSArray *extensionFieldSets;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
