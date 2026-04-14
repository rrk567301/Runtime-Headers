@class NSNumber;

@interface MTRScenesManagementClusterSceneInfoStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *sceneCount;
@property (copy, nonatomic) NSNumber *currentScene;
@property (copy, nonatomic) NSNumber *currentGroup;
@property (copy, nonatomic) NSNumber *sceneValid;
@property (copy, nonatomic) NSNumber *remainingCapacity;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
